#include "push_swap.h"

void	sb(t_list **b)
{
	t_list	*fst;
	t_list	*snd;

	if (!b || !(*b) || !((*b)->next))
		return	;
	fst = *b;
	snd = fst->next;
	fst->next = snd->next;
	snd->next = fst;
	*b = snd;
	ft_printf("sb\n");
}
