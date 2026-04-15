/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:51:57 by bgebreeg          #+#    #+#             */
/*   Updated: 2026/01/13 16:51:59 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(int value)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		exit(1);
	node->value = value;
	node->index = -1;
	node->next = NULL;
	return (node);
}

void	stack_add_back(t_stack **s, t_stack *new)
{
	t_stack	*last;

	if (!*s)
	{
		*s = new;
		return ;
	}
	last = stack_last(*s);
	last->next = new;
}

t_stack	*stack_last(t_stack *s)
{
	while (s && s->next)
		s = s->next;
	return (s);
}

int	stack_size(t_stack *s)
{
	int	i = 0;

	while (s)
	{
		i++;
		s = s->next;
	}
	return (i);
}

void	free_stack(t_stack **s)
{
	t_stack	*tmp;

	while (*s)
	{
		tmp = (*s)->next;
		free(*s);
		*s = tmp;
	}
}
