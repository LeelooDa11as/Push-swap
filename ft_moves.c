#include "ft_push_swap.h"

//es el algoritmo
//int do_moves(t_list	*stack, int len)

void	ft_swap(t_list *stack)
{
	int	aux_n;
	
	if (stack == NULL || stack->next == stack)
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
	if (*src == (*src)->next)
		*src = NULL;
	else //hace conexiones
	{
		(*src)->next->prev = (*src)->prev;
		(*src)->prev->next = (*src)->next;
		*src = (*src)->next;
	}
	if (*dst == NULL)
	{
		*dst = push_elm;
		push_elm->next = push_elm;
		push_elm->prev = push_elm;
 	}
	else //hay que conectar los elementos
	{
		push_elm->prev = (*dst)->prev;
		push_elm->next = *dst;
		(*dst)->prev->next = push_elm;
		(*dst)->prev = push_elm;
		*dst = push_elm;
	}
}

void	ft_rotate(t_list **stack)
{
	if (stack == NULL)
		return;
	*stack = (*stack)->next;
}

void	ft_rev_rotate(t_list **stack)
{
	if (stack == NULL)
		return;
	*stack = (*stack)->prev;
}