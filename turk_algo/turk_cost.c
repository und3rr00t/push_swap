#include "push_swap.h"

// static void calculate_real_cost(t_list *a, int len_a, int len_b)
// {
//     int cost_a;
//     int cost_b;

//     cost_a = a->index;
//     if (!a->above_median)
//         cost_a = len_a - a->index;
    
//     cost_b = a->target->index;
//     if (!a->target->above_median)
//         cost_b = len_b - a->target->index;
//     if (a->above_median && a->target->above_median)
//     {
//         if (cost_a > cost_b)
//             a->push_cost = cost_a;
//         else
//             a->push_cost = cost_b;
//     }
//     else if (!a->above_median && !a->target->above_median)
//     {
//         if (cost_a > cost_b)
//             a->push_cost = cost_a;
//         else
//             a->push_cost = cost_b;
//     }
//         a->push_cost = cost_a + cost_b;
// }

// void cost_analysis_a(t_list *a, t_list *b)
// {
//     int len_a;
//     int len_b;

//     len_a = ft_lstsize(a);
//     len_b = ft_lstsize(b);
//     // while (a)
//     // {
//     //     a->push_cost = a->index;
//     //     if (!(a->above_median))
//     //         a->push_cost = len_a - (a->index);
//     //     if (a->target->above_median)
//     //         a->push_cost += a->target->index;
//     //     else
//     //         a->push_cost += len_b - (a->target->index);
            
//     //     a = a->next;
//     // }
//     while (a)
//     {
//         calculate_real_cost(a, len_a, len_b);
//         a = a->next;
//     }
// }

void	cost_analysis_a(t_list *a, t_list *b)
{
	int	len_a;
	int	len_b;

	len_a = ft_lstsize(a);
	len_b = ft_lstsize(b);
	while (a)
	{
		a->push_cost = a->index;
		if (!(a->above_median))
			a->push_cost = len_a - a->index;
		if (a->target->above_median)
			a->push_cost += a->target->index;
		else
			a->push_cost += len_b - a->target->index;
		a = a->next;
	}
}

t_list *get_cheapest(t_list *stack)
{
    long    cheapest_value;
    t_list  *cheapest_node;

    if (!stack) return (NULL);
    cheapest_value = LONG_MAX;
    while (stack)
    {
        if (stack->push_cost < cheapest_value)
        {
            cheapest_value = stack->push_cost;
            cheapest_node = stack;
        }
        stack = stack->next;
    }
    return (cheapest_node);
}
