#include "ft_push_swap.h"


void sort_a(t_list **src, t_list **dst, int tri_len)
{
    int i;
    int rr;
    int p;
    
    while(*src != NULL)
    {
        i = 0;
        while (i++ < tri_len && *src != NULL)
            ft_do_push(src, dst, 'b');
        while (--i > 0)
            ft_do_rotate(dst, 'b');
        rr = tri_len;
        p = tri_len;
        while(*src != NULL && rr + p > 0)
        {

            if(rr==0 || ((*src)->num < (*dst)->prev->num && p > 0))
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

void sort_b(t_list **src, t_list **dst, int tri_len)
{
    int i;
    int rr;
    int p;
    
    while(*src != NULL)
    {
        i = 0;
        while (i++ < tri_len && *src != NULL)
            ft_do_push(src, dst, 'a');
        while (--i > 0)
            ft_do_rotate(dst, 'a');
        rr = tri_len;
        p = tri_len;
        while(*src != NULL && rr + p > 0)
        {

            if(rr==0 || ((*src)->num > (*dst)->prev->num && p > 0))
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
/*void sort_triangles_to_b(t_list **src, t_list **dst, int tri_len)
{
    int i;
    int rrb;
    int pb;

    while(*src != NULL)
    {
        i = 0;
        rrb = tri_len;
        pb = tri_len;
        while(i < tri_len)
        {
            ft_do_push(src, dst, 'b');
            ft_do_rotate(*dst, 'b');
            i++;
        }
        while(rrb + pb > 0 && *src != NULL)
        {
            ft_rev_rotate(*dst);
            if((*src)->num < (*dst)->num && pb > 0)
            {
                ft_rotate(*dst);
                ft_do_push(src, dst, 'b');
                pb--;
            }
            else
            {
                ft_rotate(*dst);
                ft_do_rev_rotate(*dst, 'b');
                rrb--;
            }
        } 
    }
}

void sort_triangles_to_a(t_list **src, t_list **dst, int tri_len)
{
    int i;

    while(*src != NULL)
    {
        i = 0;
        while(i < tri_len)
        {
            ft_do_push(src, dst, 'a');
            i++;
        }
    }
}*/

/*int send_to_b(t_list **stack_a, t_list **stack_b)
{
    while(*stack_a != NULL)
    {
        //envia un tringulo
        if((*stack_a)->next != NULL && (*stack_a)->num > (*stack_a)->next->num)
            ft_do_swap(*stack_a, 'a');
        if(*stack_b == NULL)
            ft_do_push(stack_a, stack_b, 'b');
        if((*stack_b)->next != NULL)
        {
            ft_rotate(*stack_b);
            if((*stack_a)->num < (*stack_b)->num)
                {
                    ft_rev_rotate(*stack_b);
                    ft_do_rotate(*stack_b, 'b');
                    ft_do_push(stack_a, stack_b, 'b');
                }
            else
                {
                    ft_rev_rotate(*stack_b);
                    ft_do_push(stack_a, stack_b, 'b');
                }
        }
        else
            ft_do_push(stack_a, stack_b, 'b');
    }
    return (1);
}*/
//decide si el num de stack_a va(y donde) o no 
/*int send_first_to_b(t_list **stack_a, t_list **stack_b)
{
	if (*stack_b == NULL || (*stack_a)->num > (*stack_b)->num)
	{
		ft_do_push(stack_a, stack_b, 'b');
		return (1);
	}
	ft_rev_rotate(*stack_b);
	if ((*stack_a)->num < (*stack_b)->num)
	{
		ft_rotate(*stack_b);
		ft_do_push(stack_a, stack_b, 'b');
		ft_do_rotate(*stack_b, 'b');
		return (1);
	}
	ft_rotate(*stack_b);
	return (0);
}
*/



//envia en numeros al stack_b en forma de triangulos invertidos
/*int send_to_b(t_list **stack_a, t_list **stack_b)
{
	int aux;
	
    if ((*stack_a)->next != NULL && (*stack_a)->next->num < (*stack_a)->num)
	    ft_do_swap(*stack_a, 'a');
	ft_do_push(stack_a, stack_b, 'b');
	while (*stack_a && send_first_to_b(stack_a, stack_b))
	{
        if ((*stack_a)->next != NULL && (*stack_a)->next->num < (*stack_a)->num)
		    ft_do_swap(*stack_a, 'a');
    }
    aux = (*stack_a)->num;
    ft_do_rotate(*stack_a, 'a');
    while ((*stack_a)->num != aux)
    {
        if (!send_first_to_b(stack_a, stack_b))
            ft_do_rotate(*stack_a, 'a');
    }
	return (1);
}*/

/*void send_to_a(t_list **stack_a, t_list **stack_b)
{
	int min_a;
	
	while (*stack_b)
	{
		if (!*stack_a)
		{
			ft_do_push(stack_a, stack_b, 'a');
			min_a = (*stack_a)->num;
		}
		if ((*stack_b)->num < min_a)
		{
			ft_do_push(stack_a, stack_b, 'a');
			min_a = (*stack_a)->num;
		}
		else {
			ft_do_rev_rotate(*stack_a, 'a');
			while ((*stack_b)->num < (*stack_a)->num && (*stack_a)->num != min_a)
				ft_do_rev_rotate(*stack_a, 'a');
			ft_do_rotate(*stack_a, 'a');
			ft_do_push(stack_a, stack_b, 'a');
			ft_do_rev_rotate(*stack_a, 'a');
		}
	}
}*/