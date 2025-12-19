#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#ifndef INT_MAX 
# define INT_MAX 2147483647
#endif
#ifndef INT_MIN 
# define INT_MIN -2147483648
#endif

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

int		valid_num(char *arg);
int		check_dup(t_list *a, int num);
void	del(void* content);
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

#endif