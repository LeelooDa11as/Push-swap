/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:52:03 by kkoval            #+#    #+#             */
/*   Updated: 2024/03/07 15:52:04 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/* THINGS TO DO
    *FUNCTION THAT WOULD ALLOCATE MEMORY
    *FUNCTION TO FREE IF ERROR OCCURS WITH MEMORY ALLOCATION
*/
