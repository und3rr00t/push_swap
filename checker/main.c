/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oused-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 09:55:38 by oused-da          #+#    #+#             */
/*   Updated: 2025/12/25 10:02:44 by oused-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int c, char **v)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (c < 2)
		return (0);
	a = parse_args(c, v);
	if (!a)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	read_move(&a, &b);
	if (check_sort(a, b))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	ft_lstclear(&a, del);
	ft_lstclear(&b, del);
	return (0);
}
