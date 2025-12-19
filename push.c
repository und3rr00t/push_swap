#include "push_swap.h"

static void	push(t_list **src, t_list **dst)
{
	t_list *tmp;

	if (!src || !(*src))
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dst;
	*dst = tmp;
}

void	pa(t_list **a, t_list**b)
{
	push(b, a);
	ft_printf("pa\n");
}

void	pb(t_list **a, t_list**b)
{
	push(a, b);
	ft_printf("pb\n");
}
