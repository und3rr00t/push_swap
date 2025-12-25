/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oused-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 17:04:46 by oused-da          #+#    #+#             */
/*   Updated: 2025/12/19 17:04:58 by oused-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	swap(t_list **stack)
{
	t_list	*fst;
	t_list	*snd;

	fst = *stack;
	snd = fst->next;
	fst->next = snd->next;
	snd->next = fst;
	*stack = snd;
}

void	sa(t_list **a)
{
	if (!a || !(*a) || !((*a)->next))
		return ;
	swap(a);
}

void	sb(t_list **b)
{
	if (!b || !(*b) || !((*b)->next))
		return ;
	swap(b);
}

void	ss(t_list **a, t_list **b)
{
	if (a && *a && ((*a)->next))
		swap(a);
	if (b && (*b) && ((*b)->next))
		swap(b);
}
