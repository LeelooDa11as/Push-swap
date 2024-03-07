/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:51:52 by kkoval            #+#    #+#             */
/*   Updated: 2024/03/07 16:21:09 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_push_swap.h"

void	sort_a(t_list **src, t_list **dst, int tri_len) //> 25
{
	int	i;
	int	rr;
	int	p;

	while (*src != NULL)
	{
		i = 0;
		while (i++ < tri_len && *src != NULL)
			ft_do_push(src, dst, 'b');
		while (--i > 0)
			ft_do_rotate(dst, 'b');
		rr = tri_len;
		p = tri_len;
		while (*src != NULL && rr + p > 0)
		{
			if (rr == 0 || ((*src)->num < (*dst)->prev->num && p > 0))
			{
				ft_do_push(src, dst, 'b');
				p--;
			}
			else
			{
				ft_do_rev_rotate(dst, 'b');
				rr--;
			}
		}
		while (rr + p++ < 2 * tri_len)
			ft_do_rotate(dst, 'b');
	}
}

void	sort_b(t_list **src, t_list **dst, int tri_len) //> 25
{
	int	i;
	int	rr;
	int	p;

	while (*src != NULL)
	{
		i = 0;
		while (i++ < tri_len && *src != NULL)
			ft_do_push(src, dst, 'a');
		while (--i > 0)
			ft_do_rotate(dst, 'a');
		rr = tri_len;
		p = tri_len;
		while (*src != NULL && rr + p > 0)
		{
			if (rr == 0 || ((*src)->num > (*dst)->prev->num && p > 0))
			{
				ft_do_push(src, dst, 'a');
				p--;
			}
			else
			{
				ft_do_rev_rotate(dst, 'a');
				rr--;
			}
		}
		while (rr + p++ < 2 * tri_len)
			ft_do_rotate(dst, 'a');
	}
}
