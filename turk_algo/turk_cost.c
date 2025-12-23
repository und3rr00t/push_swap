#include "push_swap.h"

void cost_analysis_a(t_list *a, t_list *b)
{
    int len_a;
    int len_b;

    len_a = ft_lstsize(a);
    len_b = ft_lstsize(b);
    while (a)
    {
        a->push_cost = a->index;
        if (!(a->above_median))
            a->push_cost = len_a - (a->index);
        if (a->target->above_median)
            a->push_cost += a->target->index;
        else
            a->push_cost += len_b - (a->target->index);
            
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
