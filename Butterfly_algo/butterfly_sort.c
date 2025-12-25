/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oused-da <oused-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 16:32:39 by oused-da          #+#    #+#             */
/*   Updated: 2025/12/25 16:38:15 by oused-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"

// static void	local_init_ranks(t_list *stack)
// {
// 	t_list	*ptr;
// 	t_list	*compare;
// 	int		rank;

// 	ptr = stack;
// 	while (ptr)
// 	{
// 		rank = 0;
// 		compare = stack;
// 		while (compare)
// 		{
// 			if (*(int *)compare->content < *(int *)ptr->content)
// 				rank++;
// 			compare = compare->next;
// 		}
// 		ptr->rank = rank;
// 		ptr = ptr->next;
// 	}
// }

// static int	get_pos(t_list *stack, int rank)
// {
// 	int	i;

// 	i = 0;
// 	while (stack)
// 	{
// 		if (stack->rank == rank)
// 			return (i);
// 		stack = stack->next;
// 		i++;
// 	}
// 	return (-1);
// }

// void	butterfly_sort(t_list **a, t_list **b)
// {
// 	int	i;
// 	int	range;
// 	int	size;

// 	if (!a || !*a) return;
// 	local_init_ranks(*a);
// 	size = ft_lstsize(*a);
// 	if (size <= 100)
// 		range = 15;
// 	else
// 		range = 35;
// 	i = 0;
// 	while (*a)
// 	{
// 		if ((*a)->rank <= i)
// 		{
// 			pb(a, b);
// 			if (ft_lstsize(*b) > 1) 
// 				rb(b); 
// 			i++;
// 		}
// 		else if ((*a)->rank <= i + range)
// 		{
// 			pb(a, b);
// 			i++;
// 		}
// 		else
// 		{
// 			ra(a);
// 		}
// 	}

// 	int max_rank = size - 1;
// 	int pos;
// 	while (*b)
// 	{
// 		pos = get_pos(*b, max_rank);
// 		if (pos == -1) 
// 		{
// 			max_rank--;
// 			continue;
// 		}
// 		if (pos <= ft_lstsize(*b) / 2)
// 		{
// 			while ((*b)->rank != max_rank)
// 				rb(b);
// 		}
// 		else
// 		{
// 			while ((*b)->rank != max_rank)
// 				rrb(b);
// 		}
// 		pa(a, b);
// 		max_rank--;
// 	}
// }

#include "push_swap.h"

static void	local_init_ranks(t_list *stack)
{
	t_list	*ptr;
	t_list	*compare;
	int		rank;

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

static int	get_pos(t_list *stack, int rank)
{
	int	i;

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

static void	sort_a_to_b(t_list **a, t_list **b, int range)
{
	int	i;

	i = 0;
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
			ra(a);
	}
}

static void	sort_b_to_a(t_list **a, t_list **b, int size)
{
	int	max_rank;
	int	pos;

	max_rank = size - 1;
	while (*b)
	{
		pos = get_pos(*b, max_rank);
		if (pos == -1)
		{
			max_rank--;
			continue ;
		}
		if (pos <= ft_lstsize(*b) / 2)
			while ((*b)->rank != max_rank)
				rb(b);
		else
			while ((*b)->rank != max_rank)
				rrb(b);
		pa(a, b);
		max_rank--;
	}
}

void	butterfly_sort(t_list **a, t_list **b)
{
	int	size;
	int	range;

	if (!a || !*a)
		return ;
	local_init_ranks(*a);
	size = ft_lstsize(*a);
	if (size <= 100)
		range = 15;
	else
		range = 35;
	sort_a_to_b(a, b, range);
	sort_b_to_a(a, b, size);
}
