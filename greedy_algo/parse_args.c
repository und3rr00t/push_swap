/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oused-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 09:36:05 by oused-da          #+#    #+#             */
/*   Updated: 2025/12/20 09:36:08 by oused-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	append_number(t_list **a, char *str)
{
	long	val;

	if (!valid_num(str))
		return (0);
	val = ft_atol(str);
	if (val > INT_MAX || val < INT_MIN)
		return (0);
	if (!add_to_stack(a, (int)val))
		return (0);
	return (1);
}

static int	process_split_args(t_list **a, char **args)
{
	int	j;

	j = 0;
	while (args[j])
	{
		if (!append_number(a, args[j]))
			return (0);
		j++;
	}
	return (1);
}

static int	parse_one_arg(t_list **a, char *raw_arg)
{
	char	**args;

	args = ft_split(raw_arg, ' ');
	if (!args)
		return (0);
	if (!args[0])
	{
		free_split(args);
		return (0);
	}
	if (!process_split_args(a, args))
	{
		free_split(args);
		return (0);
	}
	free_split(args);
	return (1);
}

t_list	*parse_args(int argc, char **argv)
{
	t_list	*a;
	int		i;

	a = NULL;
	i = 1;
	while (i < argc)
	{
		if (!parse_one_arg(&a, argv[i]))
		{
			ft_lstclear(&a, del);
			return (NULL);
		}
		i++;
	}
	return (a);
}
