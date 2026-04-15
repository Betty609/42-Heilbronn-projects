/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 21:19:13 by bgebreeg          #+#    #+#             */
/*   Updated: 2025/11/01 21:26:29 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

// #include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < n)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < n)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     printf("%s\n", ft_strnstr("helloworld", "world", 10));
//     printf("%s\n", ft_strnstr("helloworld", "world", 5));
// }
