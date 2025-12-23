#include "push_swap.h"

void	finish_rotation(t_list **stack, t_list *top_node, char stack_name)
{
	while (*stack != top_node)
	{
		if (stack_name == 'a')
		{
			if (top_node->above_median)
				ra(stack);
			else
				rra(stack);
		}
		else if (stack_name == 'b')
		{
			if (top_node->above_median)
				rb(stack);
			else
				rrb(stack);
		}
	}
}

void	move_a_to_b(t_list **a, t_list **b)
{
	t_list	*cheapest_node;

	cheapest_node = get_cheapest(*a);
	if (cheapest_node->above_median && cheapest_node->target->above_median)
	{
		while (*b != cheapest_node->target && *a != cheapest_node)
			rr(a, b);
		set_current_index(*a);
		set_current_index(*b);
	}
	else if (!(cheapest_node->above_median)
		&& !(cheapest_node->target->above_median))
	{
		while (*b != cheapest_node->target && *a != cheapest_node)
			rrr(a, b);
		set_current_index(*a);
		set_current_index(*b);
	}
	finish_rotation(a, cheapest_node, 'a');
	finish_rotation(b, cheapest_node->target, 'b');
	pb(a, b);
}

void	move_b_to_a(t_list **a, t_list **b)
{
	finish_rotation(a, (*b)->target, 'a');
	pa(a, b);
}
