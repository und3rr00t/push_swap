#include "push_swap.h"

static void swap(t_list **stack)
{
	t_list	*fst;
	t_list	*snd;

	fst = *stack;
	snd = fst->next;
	fst->next = snd->next;
	snd->next = fst;
	*stack = snd;
}
void	sa(t_list **a)
{
	if (!a || !(*a) || !((*a)->next))
		return	;
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_list **b)
{
	if (!b || !(*b) || !((*b)->next))
		return	;
	swap(b);
	ft_printf("sb\n");
}

void ss(t_list **a, t_list **b)
{
	if (a && *a && ((*a)->next))
		swap(a);
	if (b && (*b) && ((*b)->next))
		swap(b);
	ft_printf("ss\n");
}
