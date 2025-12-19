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