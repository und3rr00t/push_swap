#include "push_swap.h"

void ss(t_list **a, t_list **b)
{
	if (a && *a && (*a)->next)
	{
		t_list *fst_a = *a;
		t_list *snd_b = fst_a->next;
		fst_a->next = snd_b->next;
		snd_b->next = fst_a;
		*a = snd_b;
	}
	if (b && (*b) && ((*b)->next))
	{
		t_list *fst_b = *b;
		t_list *snd_b = fst_b->next;
		fst_b->next = snd_b->next;
		snd_b->next = fst_b;
		*b = snd_b;
	}
	ft_printf("ss\n");
}