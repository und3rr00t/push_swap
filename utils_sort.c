#include "push_swap.h"

int	val(t_list *node)
{
	return (*(int*)node->content);
}

void	index_stack(t_list **stack)
{
	t_list	*ptr;
	t_list	*compare;
	int		*new_values;
	int		size;
	int		i;

	size = ft_lstsize(*stack);
	new_values = malloc(sizeof(int) * size);
	if (!new_values) return;
	ptr = *stack;
	i = 0;
	while (ptr)
	{
		new_values[i] = 0;
		compare = *stack;
		while (compare)
		{
			if (val(compare) < val(ptr))
				new_values[i]++;
			compare = compare->next;
		}
		ptr = ptr->next;
		i++;
	}
	ptr = *stack;
	i = 0;
	while (ptr)
	{
		*(int *)ptr->content = new_values[i];
		ptr = ptr->next;
		i++;
	}
	free(new_values);
}