/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:42:19 by bgebreeg          #+#    #+#             */
/*   Updated: 2025/11/01 21:27:47 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	char src[] = "HELLOWORLD";
// 	char dst[6];
// 	size_t len = ft_strlcpy(dst, src, sizeof(dst));

// 	printf("dst: \"%s\"\n", dst);
// 	printf("return: %zu\n", len);
// 	return (0);
// }
