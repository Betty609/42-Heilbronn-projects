/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_ptr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:38:13 by bgebreeg          #+#    #+#             */
/*   Updated: 2025/11/04 11:19:09 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex_count(unsigned long n, int uppercase)
{
	int			count;
	char		c;
	const char	*digits;

	count = 0;
	if (uppercase == 1)
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";
	if (n >= 16)
		count += ft_put_hex_count(n / 16, uppercase);
	c = digits[n % 16];
	count += write(1, &c, 1);
	return (count);
}

int	ft_put_ptr_count(void *p)
{
	unsigned long	addr;
	int				count;

	if (p == NULL)
		return (write(1, "(nil)", 5));
	addr = (unsigned long)p;
	count = 0;
	count += write(1, "0x", 2);
	count += ft_put_hex_count(addr, 0);
	return (count);
}
