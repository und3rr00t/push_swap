/* ************************************************************************** */
/* */
/* turk_sort.c (BUTTERFLY ALGORITHM)                                       */
/* */
/* ************************************************************************** */

#include "push_swap.h"

static int get_pos_in_stack(t_list *stack, int rank)
{
    int i;

    i = 0;
    while (stack)
    {
        if (stack->rank == rank)
            return (i);
        stack = stack->next;
        i++;
    }
    return (-1);
}

void    turk_sort(t_list **a, t_list **b)
{
    int i;
    int range;
    int size;

    size = ft_lstsize(*a);
    init_ranks(*a);
    if (size > 100)
        range = 34;
    else
        range = 15;
    i = 0;
    {
        if ((*a)->rank <= i)
        {
            pb(a, b);
            rb(b);
            i++;
        }
        else if ((*a)->rank <= i + range)
        {
            pb(a, b);
            i++;
        }
        else
            ra(a);
    }
    int max_rank = size - 1;
    int pos;
    int size_b;

    while (*b)
    {
        pos = get_pos_in_stack(*b, max_rank);
        size_b = ft_lstsize(*b);
        if (pos <= size_b / 2)
        {
            while ((*b)->rank != max_rank)
                rb(b);
        }
        else
        {
            while ((*b)->rank != max_rank)
                rrb(b);
        }
        pa(a, b);
        max_rank--;
    }
}