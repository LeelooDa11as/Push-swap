/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoval <kkoval@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:51:42 by kkoval            #+#    #+#             */
/*   Updated: 2024/03/07 16:24:20 by kkoval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
	int				num;
	struct s_list	*next;
	struct s_list	*prev;
} t_list;

//Algorithm
int ft_sort(t_list **stack_a, t_list **stack_b, int len); //brute force
void		sort_a(t_list **src, t_list **dst, int tri_len);
void		sort_b(t_list **src, t_list **dst, int tri_len);



//Check input for all necessary parameters
int			ft_check_input(int argc, char **argv);
int			ft_check_int(int argc, char **argv);
long int	ft_atoi(char *str);
int			ft_check_duplicate(int *arr, size_t len);
int			ft_check_limits(long int);

//Stack fill and debug
int			fill_stack(t_list **current, int argc, char **argv);
void		print_stack(t_list *stack); //temporary
int			is_sorted(t_list *stack);

//Stack moves
void 		ft_swap(t_list *stack);
void		ft_push(t_list **stack_a, t_list **stack_b);
void		ft_rotate(t_list **stack);
void		ft_rev_rotate(t_list **stack);

//Do single moves
void		ft_do_swap(t_list *stack, char mode);
void    	ft_do_push(t_list **src, t_list **dst, char mode);
void    	ft_do_rotate(t_list **stack, char mode);
void    	ft_do_rev_rotate(t_list **stack, char mode);

//Do pair moves
void		ft_swap_ab(t_list *stack_a, t_list *stack_b);
void		ft_rotate_ab(t_list **stack_a, t_list **stack_b);
void    	ft_rev_rot_ab(t_list **stack_a, t_list **stack_b);

//Utils
int			ft_error(void);
int			ft_stack_len(t_list *stack);

#endif
