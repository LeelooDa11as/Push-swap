#include "ft_push_swap.h"
//aqui se crea un puntero direccion para guardar en si el stack_a
//y como ya rellenamos el stack porque hemos pasado su referencia la func es void
int	fill_stack(t_list *current, int argc, char **argv)
{
	t_list	*first;
	t_list	*follow;
	int		i;

	first = current;
	current->num = (int)ft_atoi(argv[1]);
	i = 2;
	while (i < argc)
	{
		follow = malloc(sizeof(t_list));
		if (!follow)
			return (0);
		follow->num = (int)ft_atoi(argv[i]);
		current->next = follow;
		follow->prev = current;
		current = follow;
		i++;
	}
	current->next = first;
	first->prev = current;
	return (1);
}

//esta funcion solo es para debugear y chekear, luego se borra
void	print_stack(t_list *stack_a, int len)
{
	int	i;

	i = 0;
	while(i < len)
	{
		printf("\n     %d\n     |", stack_a->num);
		stack_a = stack_a->next;
		i++;
	}
	printf("\n-----------");
}

//escribir una funcion de comprobacion para acabar el juego

int	main(int argc, char *argv[])
{
	t_list	stack_a;
	//t_list	stack_b;

	if (argc == 1)
		return (0);
	if (!ft_check_input(argc,argv))
		return (0);
	fill_stack(&stack_a, argc, argv);
	//push_swap(&stack_a, &stack_b);
	print_stack(&stack_a, argc - 1);
	
	//cheakear numeros y en caso de error enviarlos por el fd de error
	return (1);
}

