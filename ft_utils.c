#include "ft_push_swap.h"

int ft_error(void)
{
    write(2, "Error\n", 6);
    return (0);
}

int ft_stack_len(t_list *stack)
{
    int len;

    len = 0;
    while(stack != NULL)
    {
        stack = stack->next;
        len++;
    }
    return (len);
}