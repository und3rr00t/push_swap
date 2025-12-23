#include "push_swap.h"

static void	min_on_top(t_list **a)
{
	t_list	*min_node;

	min_node = find_min(*a);
	if (min_node->above_median)
	{
		while (*a != min_node)
			ra(a);
	}
	else
	{
		while (*a != min_node)
			rra(a);
	}
}

void	turk_sort(t_list **a, t_list **b)
{
	int	len_a;

	len_a = ft_lstsize(*a);
	if (len_a-- > 3 && !check_sorted(*a))
		pb(a, b);
	if (len_a-- > 3 && !check_sorted(*a))
		pb(a, b);
	while (len_a-- > 3 && !check_sorted(*a))
	{
		set_current_index(*a);
		set_current_index(*b);
		set_target_a(*a, *b);
		cost_analysis_a(*a, *b);
		move_a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		set_current_index(*a);
		set_current_index(*b);
		set_target_b(*b, *a);
		move_b_to_a(a, b);
	}
	set_current_index(*a);
	min_on_top(a);
}
