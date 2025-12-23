#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif

# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif

# include <limits.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

/* Parsing & Utils */
int		valid_num(char *arg);
int		check_dup(t_list *a, int num);
void	del(void *content);
int		add_to_stack(t_list **a, int n);
void	free_split(char **args);
t_list	*parse_args(int argc, char **argv);

/* Instructions */
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

/* Sorting Logic */
int		check_sorted(t_list *stack_a);
void	sort_stack(t_list **a, t_list **b);
void	sort_three(t_list **a);
void	turk_sort(t_list **a, t_list **b);

/* Turk Algorithm Utils */
void	set_current_index(t_list *stack);
void	set_target_a(t_list *a, t_list *b);
void	set_target_b(t_list *b, t_list *a);
void	cost_analysis_a(t_list *a, t_list *b);
void	move_a_to_b(t_list **a, t_list **b);
void	move_b_to_a(t_list **a, t_list **b);
void	finish_rotation(t_list **stack, t_list *top_node, char stack_name);
t_list	*find_min(t_list *stack);
t_list	*find_max(t_list *stack);
t_list	*get_cheapest(t_list *stack);

#endif
