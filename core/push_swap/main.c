/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:51:01 by bgebreeg          #+#    #+#             */
/*   Updated: 2026/01/13 20:35:45 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_stack(t_stack *a)
{
	while (a)
	{
		printf("value=%d index=%d\n", a->value, a->index);
		a = a->next;
	}
}


int	main(int ac, char **av)
{
	t_stack	*a = NULL;
	t_stack	*b = NULL;

	if (ac < 2)
		return (0);
	parse_args(ac, av, &a);
	if (is_sorted(a))
	{
		free_stack(&a);
		return (0);
	}
	index_stack(a);
	if (stack_size(a) <= 5)
		sort_small(&a, &b);
	else
	{
		print_stack(&a);
		sort_chunk(&a, &b);
	}
	free_stack(&a);
	return (0);
}
