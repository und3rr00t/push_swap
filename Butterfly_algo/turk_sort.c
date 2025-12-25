/* ************************************************************************** */
/* */
/* turk_sort.c (Optimized Butterfly)                                        */
/* */
/* ************************************************************************** */

#include "push_swap.h"

static void local_init_ranks(t_list *stack)
{
    t_list  *ptr;
    t_list  *compare;
    int     rank;

    ptr = stack;
    while (ptr)
    {
        rank = 0;
        compare = stack;
        while (compare)
        {
            if (*(int *)compare->content < *(int *)ptr->content)
                rank++;
            compare = compare->next;
        }
        ptr->rank = rank;
        ptr = ptr->next;
    }
}

static int get_pos(t_list *stack, int rank)
{
    int i = 0;
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
    int i = 0;
    int range;
    int size;

    if (!a || !*a) return;
    local_init_ranks(*a);
    size = ft_lstsize(*a);
    if (size <= 100)
        range = 15;
    else
        range = 35;
    while (*a)
    {
        if ((*a)->rank <= i)
        {
            pb(a, b);
            if (ft_lstsize(*b) > 1) 
                rb(b); 
            i++;
        }
        else if ((*a)->rank <= i + range)
        {
            pb(a, b);
            i++;
        }
        else
        {
            ra(a);
        }
    }

    int max_rank = size - 1;
    int pos;
    
    while (*b)
    {
        pos = get_pos(*b, max_rank);
        
        if (pos == -1) 
        {
            max_rank--;
            continue;
        }

        if (pos <= ft_lstsize(*b) / 2)
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