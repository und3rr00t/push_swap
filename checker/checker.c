/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oused-da <oused-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 10:12:06 by oused-da          #+#    #+#             */
/*   Updated: 2025/12/25 17:31:42 by oused-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	error_exit(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

static int	exec_swap_push(t_list **a, t_list **b, char *move)
{
	if (!ft_strcmp(move, "sa\n"))
		sa(a);
	else if (!ft_strcmp(move, "sb\n"))
		sb(b);
	else if (!ft_strcmp(move, "ss\n"))
		ss(a, b);
	else if (!ft_strcmp(move, "pa\n"))
		pa(a, b);
	else if (!ft_strcmp(move, "pb\n"))
		pb(a, b);
	else
		return (0);
	return (1);
}

static void	exec_move(t_list **a, t_list **b, char *move)
{
	if (exec_swap_push(a, b, move))
		return ;
	if (!ft_strcmp(move, "ra\n"))
		ra(a);
	else if (!ft_strcmp(move, "rb\n"))
		rb(b);
	else if (!ft_strcmp(move, "rr\n"))
		rr(a, b);
	else if (!ft_strcmp(move, "rra\n"))
		rra(a);
	else if (!ft_strcmp(move, "rrb\n"))
		rrb(b);
	else if (!ft_strcmp(move, "rrr\n"))
		rrr(a, b);
	else
		error_exit();
}

void	read_move(t_list **a, t_list **b)
{
	char	*move;

	move = get_next_line(0);
	while (move != NULL)
	{
		exec_move(a, b, move);
		free(move);
		move = get_next_line(0);
	}
}

int	check_sort(t_list *a, t_list *b)
{
	t_list	*tmp;

	if (b != NULL)
		return (0);
	if (!a)
		return (1);
	tmp = a;
	while (tmp->next != NULL)
	{
		if (*(int *)tmp->content > *(int *)tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
