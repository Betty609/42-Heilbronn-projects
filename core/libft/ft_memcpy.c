/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:39:01 by bgebreeg          #+#    #+#             */
/*   Updated: 2025/11/01 17:49:54 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = dst;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char src[20] = "hello world!";
// 	char dst1[20];
// 	char dst2[20];

// 	ft_memcpy(dst1, src, 5);
// 	memcpy(dst2, src, 5);

// 	dst1[5] = '\0';
// 	dst2[5] = '\0';

// 	printf("ft_memcpy: %s\n", dst1);
// 	printf("memcpy:  %s\n", dst2);
// 	return (0);
// }