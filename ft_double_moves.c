/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_moves.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:51:12 by kkoval            #+#    #+#             */
/*   Updated: 2024/03/07 15:51:14 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_swap_ab(t_list *stack_a, t_list *stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
    write(1, "ss\n", 3);
}

void	ft_rotate_ab(t_list **stack_a, t_list **stack_b)
{
    ft_rotate(stack_a);
    ft_rotate(stack_b);
    write(1, "rr\n", 3);
}

void    ft_rev_rot_ab(t_list **stack_a, t_list **stack_b)
{
    ft_rev_rotate(stack_a);
    ft_rev_rotate(stack_b);
    write(1, "rrr\n", 4);
}
