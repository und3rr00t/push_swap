#include "push_swap.h"

int     check_sorted(t_list *stack_a)
{
        while (stack_a && stack_a->next)
        {
                if (*(int *)stack_a->content > *(int *)stack_a->next->content)
                        return (0);
                stack_a = stack_a->next;
        }
        return (1);
}

int     get_max_index(t_list *a)
{
        int     i = 0;
        int     max_i = 0;
        int     max_val;

        if (!a) return (-1);
        max_val = *(int *)a->content;
        while (a)
        {
                if (*(int *)a->content > max_val)
                {
                        max_val = *(int *)a->content;
                        max_i = i;
                }
                a = a->next;
                i++;
        }
        return (max_i);
}

void    sort_three(t_list **a)
{
        int     max_pos;

        max_pos = get_max_index(*a);
        if (max_pos == 0)
                ra(a);
        else if (max_pos == 1) 
                rra(a);
        if (*(int *)(*a)->content > *(int *)(*a)->next->content)
                sa(a);
}

void sort_stack(t_list **a, t_list **b)
{
    int size;

    size = ft_lstsize(*a);
    if (size <= 1 || check_sorted(*a))
        return ;
    if (size == 2)
        sa(a);
    else if (size == 3)
        sort_three(a);
    else
        turk_sort(a, b);
}
