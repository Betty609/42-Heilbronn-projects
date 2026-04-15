/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:38:35 by bgebreeg          #+#    #+#             */
/*   Updated: 2025/11/03 21:41:17 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_format(char spec, va_list args)
{
	if (spec == 'c')
		return (ft_putchar_count((char)va_arg(args, int)));
	if (spec == 's')
		return (ft_putstr_count(va_arg(args, char *)));
	if (spec == 'p')
		return (ft_put_ptr_count(va_arg(args, void *)));
	if (spec == 'd' || spec == 'i')
		return (ft_putnbr_count(va_arg(args, int)));
	if (spec == 'u')
		return (ft_put_unsigned_count(va_arg(args, unsigned int)));
	if (spec == 'x')
		return (ft_put_hex_count(va_arg(args, unsigned int), 0));
	if (spec == 'X')
		return (ft_put_hex_count(va_arg(args, unsigned int), 1));
	if (spec == '%')
		return (write(1, "%", 1));
	return (0);
}
