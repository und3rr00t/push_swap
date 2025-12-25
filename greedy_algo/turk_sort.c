/* In turk_sort.c */
# include "push_swap.h"
static void min_on_top(t_list **a)
{
    t_list  *min_node;

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

static int count_in_chunk(t_list *a, int limit)
{
    int count = 0;
    while (a)
    {
        if (a->rank < limit)
            count++;
        a = a->next;
    }
    return (count);
}

void    turk_sort(t_list **a, t_list **b)
{
    int len_a;
    int chunk_size;
    int limit;

    len_a = ft_lstsize(*a);
    init_ranks(*a);
    if (len_a > 100)
        chunk_size = len_a / 1;
    else
        chunk_size = len_a;
    limit = chunk_size;
    if (len_a > 3 && !check_sorted(*a))
        pb(a, b);
    if (len_a > 3 && !check_sorted(*a))
        pb(a, b);
    while (ft_lstsize(*a) > 3 && !check_sorted(*a))
    {
        if (count_in_chunk(*a, limit) == 0)
            limit += chunk_size;
        set_current_index(*a);
        set_current_index(*b);
        set_target_a(*a, *b);
        cost_analysis_a(*a, *b, limit);
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
