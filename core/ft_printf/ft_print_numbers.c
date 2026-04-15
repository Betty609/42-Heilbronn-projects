/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:36:55 by bgebreeg          #+#    #+#             */
/*   Updated: 2025/11/03 21:42:12 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	putnbr_rec(long n)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
		count += putnbr_rec(n / 10);
	c = (n % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}

int	ft_putnbr_count(int n)
{
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count += write(1, "-", 1);
		nb = -nb;
	}
	count += putnbr_rec(nb);
	return (count);
}

static int	put_unsigned_rec(unsigned int n)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
		count += put_unsigned_rec(n / 10);
	c = (n % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}

int	ft_put_unsigned_count(unsigned int n)
{
	return (put_unsigned_rec(n));
}
