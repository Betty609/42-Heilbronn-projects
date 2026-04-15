/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:32:38 by bgebreeg          #+#    #+#             */
/*   Updated: 2025/11/03 21:42:53 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_handle_format(char spec, va_list args);

int	ft_putchar_count(char c);
int	ft_putstr_count(char *s);
int	ft_putnbr_count(int n);
int	ft_put_unsigned_count(unsigned int n);
int	ft_put_hex_count(unsigned long n, int uppercase);
int	ft_put_ptr_count(void *p);

#endif
