// #include "push_swap.h"

// void cost_analysis_a(t_list *a, t_list *b, int limit)
// {
//     int len_a;
//     int len_b;

//     len_a = ft_lstsize(a);
//     len_b = ft_lstsize(b);
//     while (a)
//     {
//         if (a->rank >= limit)
//         {
//             a->push_cost = 2147483647;
//         }
//         else
//         {
//             a->push_cost = a->index;
//             if (!(a->above_median))
//                 a->push_cost = len_a - (a->index);
//             if (a->target->above_median)
//                 a->push_cost += a->target->index;
//             else
//                 a->push_cost += len_b - (a->target->index);
//         }
//         a = a->next;
//     }
// }

// t_list *get_cheapest(t_list *stack)
// {
//     long    cheapest_value;
//     t_list  *cheapest_node;

//     if (!stack) return (NULL);
//     cheapest_value =LONG_MAX;
//     while (stack)
//     {
//         if (stack->push_cost < cheapest_value)
//         {
//             cheapest_value = stack->push_cost;
//             cheapest_node = stack;
//         }
//         stack = stack->next;
//     }
//     return (cheapest_node);
// }







/* ************************************************************************** */
/* */
/* turk_cost.c (Optimized)                            :+:      :+:    :+:   */
/* +:+ +:+         +:+     */
/* By: oused-da <marvin@42.fr>                    +#+  +:+       +#+        */
/* +#+#+#+#+#+   +#+           */
/* Created: 2025/12/25 13:00:00 by oused-da          #+#    #+#             */
/* */
/* ************************************************************************** */

#include "push_swap.h"

void cost_analysis_a(t_list *a, t_list *b, int limit)
{
    int len_a;
    int len_b;
    int cost_a;
    int cost_b;

    len_a = ft_lstsize(a);
    len_b = ft_lstsize(b);
    while (a)
    {
        if (a->rank >= limit)
            a->push_cost = 2147483647;
        else
        {
            cost_a = a->index;
            if (!(a->above_median))
                cost_a = len_a - a->index;
            cost_b = a->target->index;
            if (!(a->target->above_median))
                cost_b = len_b - a->target->index;
            if (a->above_median && a->target->above_median)
                a->push_cost = (cost_a > cost_b) ? cost_a : cost_b;
            else if (!(a->above_median) && !(a->target->above_median))
                a->push_cost = (cost_a > cost_b) ? cost_a : cost_b;
            else
                a->push_cost = cost_a + cost_b;
        }
        a = a->next;
    }
}

t_list *get_cheapest(t_list *stack)
{
    long    cheapest_value;
    t_list  *cheapest_node;

    if (!stack)
        return (NULL);
    cheapest_value = LONG_MAX;
    cheapest_node = NULL;
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
