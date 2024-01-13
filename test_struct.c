#include "ft_push_swap.h"

typedef struct s_list
{
	int	num;
	struct s_list *next;
	struct s_list *prev;
} t_list;

int ft_fill_val(t_list *a, int n)
{
	a->num = n;
	return (0);
}

int ft_fill_next(t_list *piece)
{
	t_list *new_piece;
	new_piece = malloc(sizeof(t_list));
	new_piece->num = -1999;
	piece->next = new_piece;
	return (0);

}
int main(void)
{
	//int	array[] = {5, 10, 1};

	//t_list a;
	t_list b;
	//t_list c;
	ft_fill_next(&b);
	printf("%d",b.next->num);
	return (1);
}
