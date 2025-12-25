/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oused-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 17:04:03 by oused-da          #+#    #+#             */
/*   Updated: 2025/12/19 17:04:05 by oused-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	push(t_list **src, t_list **dst)
{
	t_list	*tmp;

	if (!src || !(*src))
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dst;
	*dst = tmp;
}

void	pa(t_list **a, t_list**b)
{
	push(b, a);
}

void	pb(t_list **a, t_list**b)
{
	push(a, b);
}
