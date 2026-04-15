/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:52:34 by bgebreeg          #+#    #+#             */
/*   Updated: 2026/01/13 16:57:09 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_array(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	index_stack(t_stack *a)
{
	int		size;
	int		*arr;
	int		i;
	t_stack	*tmp;

	size = stack_size(a);
	arr = malloc(sizeof(int) * size);
	if (!arr)
		exit(1);
	tmp = a;
	i = 0;
	while (tmp)
	{
		arr[i++] = tmp->value;
		tmp = tmp->next;
	}
	sort_array(arr, size);
	while (a)
	{
		i = 0;
		while (i < size)
		{
			if (a->value == arr[i])
				a->index = i;
			i++;
		}
		a = a->next;
	}
	free(arr);
}
