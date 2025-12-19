#include "push_swap.h"

int valid_num(char *arg)
{
	int i = 0;
	if (arg[i] == '-' || arg[i] == '+')
		i++;
	if (!arg[i])
		return (0);
	while (arg[i])
	{
		if(!ft_isdigit(arg[i]))
			return (0);
		i++;
	}
	return (1);
}
int check_dup(t_list *a, int num)
{
	int c = 0;
	while (a != NULL)
	{
		if(*(int *)a->content == num)
			return 1;
		a = a->next;
	}	
	return 0;
}
void	del(void* content)
{
	free(content);
}
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