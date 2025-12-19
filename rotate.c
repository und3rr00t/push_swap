/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oused-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 17:04:37 by oused-da          #+#    #+#             */
/*   Updated: 2025/12/19 17:04:39 by oused-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*tail;

	tmp = *stack;
	*stack = (*stack)->next;
	tail = *stack;
	while (tail->next)
		tail = tail->next;
	tail->next = tmp;
	tmp->next = NULL;
}

void	ra(t_list **a)
{
	if (!a || !(*a) || !((*a)->next))
		return ;
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_list **b)
{
	if (!b || !(*b) || !((*b)->next))
		return ;
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_list **a, t_list **b)
{
	if ((a && *a && (*a)->next) || (b && *b && (*b)->next))
	{
		if (a && *a && (*a)->next)
			rotate(a);
		if (b && *b && (*b)->next)
			rotate(b);
		ft_printf("rr\n");
	}
}
