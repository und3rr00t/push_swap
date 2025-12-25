/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oused-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 09:55:32 by oused-da          #+#    #+#             */
/*   Updated: 2025/12/25 09:55:34 by oused-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "gnl/get_next_line.h"
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <limits.h>

t_list	*parse_args(int argc, char **argv);
void	pa(t_list **a, t_list**b);
void	pb(t_list **a, t_list**b);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
int		check_sort(t_list *a, t_list *b);
void	read_move(t_list **a, t_list**b);
int		valid_num(char *arg);
int		check_dup(t_list *a, int num);
void	del(void *content);
void	free_split(char **args);
int		add_to_stack(t_list **a, int n);

// libft
int		ft_strcmp(char *s1, char *s2);

#endif
