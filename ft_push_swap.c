#include "ft_push_swap.h"
//aqui se crea un puntero direccion para guardar en si el stack_a
//y como ya rellenamos el stack porque hemos pasado su referencia la func es void
int	fill_stack(t_list **current, int argc, char **argv)
{
	t_list	*follow;
	t_list *tmp; // para recorrer la lista que creamos
	int		i;

	*current = malloc(sizeof(t_list));
	if (!current)
		return (0);
	(*current)->num = (int)ft_atoi(argv[1]);
	(*current)->next = NULL;
	i = 2;
	while (i < argc)
	{
		follow = malloc(sizeof(t_list));
		if (!follow)
			return (0);
		follow->num = (int)ft_atoi(argv[i]);
		follow->next = NULL;
		tmp = *current;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = follow;
		i++;
	}
	return (1);
}

//esta funcion solo es para debugear y chekear, luego se borra
void	print_stack(t_list *stack)
{
	int	i;

	i = 0;
	while(stack != NULL)
	{
		printf("\n     %d\n     |", stack->num);
		stack = stack->next;
		i++;
	}
	printf("\n-----------\n");
}

//escribir una funcion de comprobacion para acabar el juego

int	is_sorted(t_list *stack)
{
	while (stack != NULL && stack->next != NULL)
	{
		if (stack->num > stack->next->num)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int ft_sort(t_list *stack_a, t_list *stack_b)
{
	t_list	*tmp;
	int 	cont;
	int		min_ind;
	int 	min;

	tmp = NULL;
	if (is_sorted(stack_a) == 1)
		return(1);
	while (stack_a != NULL)
	{
		tmp = stack_a;
		min = stack_a->num;
		min_ind = 0;
		cont = 0;
		while (tmp->next != NULL)
		{
			if(tmp->next->num < min)
			{
				min = tmp->next->num;
				min_ind = cont + 1; //guardamos la posicion del next que sera el + small
			}
			tmp = tmp->next;
			cont++;
		}
		while (min_ind > 0)
		{
			ft_do_rotate(stack_a, 'a');
			min_ind--;
		}
		ft_do_push(&stack_a, &stack_b, 'b');
	}
	while (stack_b != NULL)
		ft_do_push(&stack_a, &stack_b, 'a');
	if (is_sorted(stack_a) == 1 && stack_b == NULL)
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list  *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	if (!ft_check_input(argc,argv))
		return (ft_error());
	fill_stack(&stack_a, argc, argv);
	print_stack(stack_a);
	if (ft_sort(stack_a, stack_b) != 1)
		return(ft_error()); //solo para chekear
	print_stack(stack_a);
	return (1);
}

/*int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list  *stack_b;
	t_list *stack_c;
	stack_c = NULL;
	char	*arr[4];
	arr[0] =  "a.out";
	arr[1] = "6";
	arr[2] = "7";
	arr[3] = "1";
	
	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	if (!ft_check_input(argc,argv))
		return (ft_error());
	fill_stack(&stack_a, argc, argv);
	//fill_stack(&stack_b, 4, arr);
	//push_swap(&stack_a, &stack_b);
	print_stack(stack_a);
	print_stack(stack_c);
	ft_sort(stack_a, stack_b);
	//do_moves(&stack_a, len);
	//ft_swap(stack_a);
	//ft_push(&stack_a, &stack_c);
	//printf("%d\n", is_sorted(&stack_b));
	//printf("%d\n", ft_stack_len(stack_c));
	//ft_rotate(stack_a);
	//ft_rev_rotate(stack_b);
	print_stack(stack_a);
	print_stack(stack_c);
	//cheakear numeros y en caso de error enviarlos por el fd de error
	return (1);
}
*/

