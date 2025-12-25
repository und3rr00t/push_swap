#include "push_swap.h"

t_list	*find_max(t_list *stack)
{
	long	max;
	t_list	*max_node;

	if (!stack)
		return (NULL);
	max = LONG_MIN;
	while (stack)
	{
		if (*(int *)stack->content > max)
		{
			max = *(int *)stack->content;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}

t_list	*find_min(t_list *stack)
{
	long	min;
	t_list	*min_node;

	if (!stack)
		return (NULL);
	min = LONG_MAX;
	while (stack)
	{
		if (*(int *)stack->content < min)
		{
			min = *(int *)stack->content;
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}

void	set_current_index(t_list *stack)
{
	int	i;
	int	median;

	i = 0;
	if (!stack)
		return ;
	median = ft_lstsize(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= median)
			stack->above_median = 1;
		else
			stack->above_median = 0;
		stack = stack->next;
		i++;
	}
}

void	set_target_a(t_list *a, t_list *b)
{
	t_list	*curr_b;
	t_list	*target_node;
	long	best_match_index;

	while (a)
	{
		best_match_index = LONG_MIN;
		target_node = NULL;
		curr_b = b;
		while (curr_b)
		{
			if (*(int *)curr_b->content < *(int *)a->content
				&& *(int *)curr_b->content > best_match_index)
			{
				best_match_index = *(int *)curr_b->content;
				target_node = curr_b;
			}
			curr_b = curr_b->next;
		}
		if (LONG_MIN == best_match_index)
			a->target = find_max(b);
		else
			a->target = target_node;
		a = a->next;
	}
}

void	set_target_b(t_list *b, t_list *a)
{
	t_list	*curr_a;
	t_list	*target_node;
	long	best_match_index;

	while (b)
	{
		best_match_index = LONG_MAX;
		target_node = NULL;
		curr_a = a;
		while (curr_a)
		{
			if (*(int *)curr_a->content > *(int *)b->content
				&& *(int *)curr_a->content < best_match_index)
			{
				best_match_index = *(int *)curr_a->content;
				target_node = curr_a;
			}
			curr_a = curr_a->next;
		}
		if (LONG_MAX == best_match_index)
			b->target = find_min(a);
		else
			b->target = target_node;
		b = b->next;
	}
}

void	init_ranks(t_list *stack)
{
	t_list	*ptr;
	t_list	*check;
	int		rank;

	ptr = stack;
	while (ptr)
	{
		rank = 0;
		check = stack;
		while (check)
		{
			if (*(int *)check->content < *(int *)ptr->content)
				rank++;
			check = check->next;
		}
		ptr->rank = rank;
		ptr = ptr->next;
	}
}
