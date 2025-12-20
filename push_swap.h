/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oused-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 17:04:14 by oused-da          #+#    #+#             */
/*   Updated: 2025/12/19 17:04:16 by oused-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif

# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

int		valid_num(char *arg);
int		check_dup(t_list *a, int num);
void	del(void *content);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list**b);
void	pb(t_list **a, t_list**b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
int		add_to_stack(t_list **a, int n);
void	free_split(char **args);
t_list	*parse_args(int argc, char **argv);
void	sort_stack(t_list **a, t_list **b);
int		get_max_index(t_list *a);
void	sort_three(t_list **a);
int		check_sorted(t_list *stack_a);


#endif
