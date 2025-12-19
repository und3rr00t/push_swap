#include "push_swap.h"

int main(int c, char **v)
{
	if (c == 1)
		return 0;
	t_list *a = NULL;
	t_list *n;
	int i = 1;
	long val;
	int *cont;
	while (i < c)
	{
		if (!valid_num(v[i]))
		{
			ft_putstr_fd("Error\n", 2);
			ft_lstclear(&a, del);
			return (1);
		}
		val = ft_atol(v[i]);
		if (val > INT_MAX || val < INT_MIN)
		{
			ft_putstr_fd("Error\n", 2);
			ft_lstclear(&a, del);
			return (1);
		}
		if (check_dup(a, (int)val))
		{
			ft_putstr_fd("Error\n", 2);
			ft_lstclear(&a, del);
			return (1);
		}
		cont =malloc(sizeof(int));
		if (!cont)
		{
			ft_lstclear(&a, del);
			return 0;
		}
		*cont = (int)val;
		n = ft_lstnew(cont);
		if (!n)
		{
			free(cont);
			ft_lstclear(&a, del);
			return (1);
		}
		ft_lstadd_back(&a, n);
		i++;
	}
	t_list *tmp = a;
	while (tmp != NULL)
	{
		printf("| %d |->", *(int *)tmp->content);
		tmp=tmp->next;
	}
	printf("| NULL |\n");
	ft_lstclear(&a, del);
	return 0;
}