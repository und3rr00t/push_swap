#include "push_swap.h"

void	sa(t_list **a)
{
	t_list	*fst;
	t_list	*snd;

	if (!a || !(*a) || !((*a)->next))
		return	;
	fst = *a;
	snd = fst->next;
	fst->next = snd->next;
	snd->next = fst;
	*a = snd;
	ft_printf("sa\n");
}
