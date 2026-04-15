/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:44:28 by bgebreeg          #+#    #+#             */
/*   Updated: 2025/11/01 17:57:01 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

// int main(void)
// {
//     printf("%c\n", ft_toupper('a'));
//     printf("%c\n", ft_toupper('z'));
//     printf("%c\n", ft_toupper('A'));
//     printf("%c\n", ft_toupper('!'));
// }
