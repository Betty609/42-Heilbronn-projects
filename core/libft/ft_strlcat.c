/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:18:17 by bgebreeg          #+#    #+#             */
/*   Updated: 2025/11/01 17:53:49 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = 0;
	while (dlen < dstsize && dst[dlen])
		dlen++;
	slen = 0;
	while (src[slen])
		slen++;
	if (dlen == dstsize)
		return (dstsize + slen);
	i = 0;
	while (src[i] && (dlen + i + 1) < dstsize)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	if (dlen + i < dstsize)
		dst[dlen + i] = '\0';
	return (dlen + slen);
}

// int	main(void)
// {
// 	char dst[11] = "HELLO";
// 	char src[] = "WORLD";
// 	size_t len = ft_strlcat(dst, src, sizeof(dst));

// 	printf("dst: \"%s\"\n", dst);
// 	printf("return: %zu\n", len);
// 	return (0);
// }
