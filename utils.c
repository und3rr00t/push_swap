/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oused-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 17:05:06 by oused-da          #+#    #+#             */
/*   Updated: 2025/12/19 17:05:07 by oused-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	valid_num(char *arg)
{
	int	i;

	i = 0;
	if (arg[i] == '-' || arg[i] == '+')
		i++;
	if (!arg[i])
		return (0);
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_dup(t_list *a, int num)
{
	while (a != NULL)
	{
		if (*(int *)a->content == num)
			return (1);
		a = a->next;
	}	
	return (0);
}

void	del(void *content)
{
	free(content);
}

void	free_split(char **args)
{
	int	i;

	i = 0;
	if (!args)
		return ;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}

int	add_to_stack(t_list **a, int n)
{
	t_list	*new_node;
	int		*content;

	if (check_dup(*a, n))
		return (0);
	content = malloc(sizeof(int));
	if (!content)
		return (0);
	*content = n;
	new_node = ft_lstnew(content);
	if (!new_node)
	{
		free(content);
		return (0);
	}
	ft_lstadd_back(a, new_node);
	return (1);
}
