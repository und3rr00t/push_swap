/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oused-da <oused-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 17:05:12 by oused-da          #+#    #+#             */
/*   Updated: 2025/12/25 16:20:38 by oused-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int c, char **v)
{
	t_list	*a;
	t_list	*b;

	if (c < 2)
		return (0);
	a = parse_args(c, v);
	if (!a)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	b = NULL;
	sort_stack(&a, &b);
	ft_lstclear(&a, del);
	ft_lstclear(&b, del);
	return (0);
}
