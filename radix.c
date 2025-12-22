#include "push_swap.h"

static int	get_max_bits(t_list **stack)
{
	t_list	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = *(int *)head->content;
	max_bits = 0;
	while (head)
	{
		if (*(int *)head->content > max)
			max = *(int *)head->content;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_list **a, t_list **b)
{
	t_list	*head_a;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	index_stack(a); 

	size = ft_lstsize(*a);
	max_bits = get_max_bits(a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			head_a = *a;
			if (((*(int *)head_a->content >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}
