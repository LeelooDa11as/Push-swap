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

//Check input for all necessary parameters
int			ft_check_input(int argc, char **argv);
int			ft_check_int(int argc, char **argv);
long int	ft_atoi(char *str);
int			ft_check_duplicate(int *arr, size_t len);
int			ft_check_limits(long int);

//Stack fill and debug
int			fill_stack(t_list *current, int argc, char **argv);
void		print_stack(t_list *stack_a, int len);

#endif
