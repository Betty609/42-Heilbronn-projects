/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:51:40 by bgebreeg          #+#    #+#             */
/*   Updated: 2026/01/13 16:57:40 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_duplicate(t_stack *a, int value)
{
	while (a)
	{
		if (a->value == value)
			error_exit();
		a = a->next;
	}
}

long	ft_atol(const char *str)
{
	long	res = 0;
	int		sign = 1;

	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (*str)
	{
		if (!ft_isdigit(*str))
			error_exit();
		res = res * 10 + (*str - '0');
		if ((res * sign) > INT_MAX || (res * sign) < INT_MIN)
			error_exit();
		str++;
	}
	return (res * sign);
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

void	parse_args(int ac, char **av, t_stack **a)
{
	int		i;
	long	val;

	i = 1;
	while (i < ac)
	{
		val = ft_atol(av[i]);
		check_duplicate(*a, (int)val);
		stack_add_back(a, stack_new((int)val));
		i++;
	}
}
