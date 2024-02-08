#include "ft_push_swap.h"
//hay que proteger los movimientos y no imprimir si el movimiento
//no se ha hecho?
void	ft_do_swap(t_list *stack, char mode)
{
    ft_swap(stack);
    if (mode == 'a')
        write(1, "sa\n", 3);
    else if (mode == 'b')
        write(1, "sb\n", 3);
}

void    ft_do_push(t_list **stack_a, t_list **stack_b, char mode)
{
    if (mode == 'a')
    {
        ft_push(stack_b, stack_a);
        write(1, "pa\n", 3);
    }
    else if (mode == 'b')
    {
        ft_push(stack_a, stack_b);
        write(1, "pb\n", 3);
    }
}

void    ft_do_rotate(t_list *stack, char mode)
{
    ft_rotate(stack);
    if (mode == 'a')
        write(1, "ra\n", 3);
    else if (mode == 'b')
        write(1, "rb\n", 3);
}

void    ft_do_rev_rotate(t_list *stack, char mode)
{
    ft_rev_rotate(stack);
    if (mode == 'a')
        write(1, "rra\n", 4);
    else if (mode == 'b')
        write(1, "rrb\n", 4);
}
