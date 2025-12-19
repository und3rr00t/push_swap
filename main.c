#include "push_swap.h"

int main(int c, char **v)
{
	if (c == 1)
		return 0;
	t_list *a = NULL;
	t_list *b = NULL;
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
			return (1);
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
	if (a)
    {
        t_list *temp = a;
        a = a->next;
        temp->next = b;
        b = temp;
    }

    if (a)
    {
        t_list *temp = a;
        a = a->next;
        temp->next = b; 
        b = temp;      
    }

    ft_printf("\n=== BEFORE ===\n");
    ft_printf("Stack A: ");
    t_list *tmp_a = a;
    while (tmp_a) { ft_printf("| %d |->", *(int*)tmp_a->content); tmp_a = tmp_a->next; }
    ft_printf("NULL\n");

    ft_printf("Stack B: ");
    t_list *tmp_b = b;
    while (tmp_b) { ft_printf("| %d |->", *(int*)tmp_b->content); tmp_b = tmp_b->next; }
    ft_printf("NULL\n");

    ss(&a, &b); 


    ft_printf("\n=== AFTER SS ===\n");
    ft_printf("Stack A: ");
    tmp_a = a;
    while (tmp_a) { ft_printf("| %d |->", *(int*)tmp_a->content); tmp_a = tmp_a->next; }
    ft_printf("NULL\n");

    ft_printf("Stack B: ");
    tmp_b = b;
    while (tmp_b) { ft_printf("| %d |->", *(int*)tmp_b->content); tmp_b = tmp_b->next; }
    ft_printf("NULL\n");
	pa(&a, &b);
	ft_printf("\n=== AFTER pa ===\n");
    ft_printf("Stack A: ");
    tmp_a = a;
    while (tmp_a) { ft_printf("| %d |->", *(int*)tmp_a->content); tmp_a = tmp_a->next; }
    ft_printf("NULL\n");

    ft_printf("Stack B: ");
    tmp_b = b;
    while (tmp_b) { ft_printf("| %d |->", *(int*)tmp_b->content); tmp_b = tmp_b->next; }
    ft_printf("NULL\n");

	pb(&a, &b);
	ft_printf("\n=== AFTER pb ===\n");
    ft_printf("Stack A: ");
    tmp_a = a;
    while (tmp_a) { ft_printf("| %d |->", *(int*)tmp_a->content); tmp_a = tmp_a->next; }
    ft_printf("NULL\n");

    ft_printf("Stack B: ");
    tmp_b = b;
    while (tmp_b) { ft_printf("| %d |->", *(int*)tmp_b->content); tmp_b = tmp_b->next; }
    ft_printf("NULL\n");
    ft_lstclear(&a, del);
    ft_lstclear(&b, del);
	return 0;
}