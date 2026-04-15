/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_chunk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:53:33 by bgebreeg          #+#    #+#             */
/*   Updated: 2026/01/13 20:27:18 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_chunk(t_stack **a, t_stack **b)
{
	int	size;
	int	chunk;
	int	i;

	size = stack_size(*a);
	chunk = (size <= 100) ? 15 : 30;
	i = 0;

	/* Push from A to B by chunks */
	while (*a)
	{
		if ((*a)->index <= i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->index <= i + chunk)
		{
			pb(a, b);
			i++;
		}
		else
			ra(a);
	}

	/* Push back from B to A (always max first) */
	while (*b)
	{
		int	pos;
		int	b_size;

		b_size = stack_size(*b);
		pos = find_max_index_pos(*b);

		if (pos <= b_size / 2)
		{
			while (pos--)
				rb(b);
		}
		else
		{
			while (pos++ < b_size)
				rrb(b);
		}
		pa(a, b);
	}

	/* FINAL NORMALIZATION: rotate A to smallest on top */
	size = stack_size(*a);
	i = find_min_pos(*a);

	if (i <= size / 2)
	{
		while (i--)
			ra(a);
	}
	else
	{
		while (i++ < size)
			rra(a);
	}
}

