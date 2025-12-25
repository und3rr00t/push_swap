#include "push_swap.h"

void cost_analysis_a(t_list *a, t_list *b, int limit)
{
    int len_a = ft_lstsize(a);
    int len_b = ft_lstsize(b);
    int cost_a;
    int cost_b;

    while (a)
    {
        // Chunk Filter: Ignore numbers outside the limit
        if (a->rank >= limit)
        {
            a->push_cost = 2147483647; 
        }
        else
        {
            // 1. Calculate raw costs for A
            cost_a = a->index;
            if (!a->above_median)
                cost_a = len_a - a->index;

            // 2. Calculate raw costs for Target in B
            cost_b = a->target->index;
            if (!a->target->above_median)
                cost_b = len_b - a->target->index;

            // 3. OPTIMIZATION: Use the CHEAPEST combination
            if (a->above_median && a->target->above_median)
                // Both Top: Cost is MAX(cost_a, cost_b) because we use RR
                a->push_cost = (cost_a > cost_b) ? cost_a : cost_b;
            else if (!a->above_median && !a->target->above_median)
                // Both Bottom: Cost is MAX(cost_a, cost_b) because we use RRR
                a->push_cost = (cost_a > cost_b) ? cost_a : cost_b;
            else
                // Different: Cost is SUM because we cannot sync
                a->push_cost = cost_a + cost_b;
        }
        a = a->next;
    }
}

t_list *get_cheapest(t_list *stack)
{
    long    cheapest_value = LONG_MAX;
    t_list  *cheapest_node = NULL;

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