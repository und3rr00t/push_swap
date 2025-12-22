/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oused-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 17:05:12 by oused-da          #+#    #+#             */
/*   Updated: 2025/12/19 17:05:13 by oused-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_list  *a;
    t_list  *b;

    if (argc < 2)
        return (0);
    a = parse_args(argc, argv);
    if (!a)
    {
        ft_putstr_fd("Error\n", 2);
        return (1);
    }
    b = NULL;
    sort_stack(&a, &b);
    ft_lstclear(&a, del);
    ft_lstclear(&b, del);
    return (0);
}
