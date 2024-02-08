#include "ft_push_swap.h"

//es el algoritmo
//int do_moves(t_list	*stack, int len)

void	ft_swap(t_list *stack)
{
	int	aux_n;
	
	if (stack == NULL || stack->next == NULL)
		return;
	aux_n = stack->num;
	stack->num = (stack->next)->num;
	stack->next->num = aux_n;
}

void	ft_push(t_list **src, t_list **dst)
{
	t_list	*push_elm;
	
	if (*src == NULL)
		return;
	push_elm = *src;
	*src = (*src)->next;
	push_elm->next = *dst;
	*dst = push_elm;
}

void	ft_rotate(t_list *stack)
{
	int	aux;

	if (stack == NULL)
		return;
	aux = stack->num;
	//solo entra si hay almenos 2
	while (stack != NULL && stack->next != NULL)
	{
		stack->num = stack->next->num;
		stack = stack->next;
	}
	//el primer elemento se guarda como el ultimo al acabar while
	stack->num = aux;
}

void	ft_rev_rotate(t_list *stack)
{
	int	current;
	int	next;
	t_list	*first;
	//first is needed to preserve first element, as there is no possibity
	//to go back, to it is easier to access it with a pointer, it is needed 
	// to put the last num
	if (stack == NULL)
		return;
	first = stack;
	current = stack->num;
	while (stack != NULL && stack->next != NULL)
	{	
		next = stack->next->num;
		stack->next->num = current;
		current = next;
		stack = stack->next;
	}
	first->num = current;
}


