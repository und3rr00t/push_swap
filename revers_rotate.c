#include "push_swap.h"

static void	reverse_rotate(t_list **stack)
{
	t_list	*tail;
	t_list	*before_tail;

	tail = *stack;
	before_tail = NULL;
	while (tail->next)
	{
		before_tail = tail;
		tail = tail->next;
	}
	tail->next = *stack;
	*stack = tail;
	before_tail->next = NULL;
}

void	rra(t_list **a)
{
	if (!a || !(*a) || !((*a)->next))
		return ;
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_list **b)
{
	if (!b || !(*b) || !((*b)->next))
		return ;
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_list **a, t_list **b)
{
	if ((a && *a && (*a)->next) || (b && *b && (*b)->next))
	{
		if (a && *a && (*a)->next)
			reverse_rotate(a);
		if (b && *b && (*b)->next)
			reverse_rotate(b);
		ft_printf("rrr\n");
	}
}
