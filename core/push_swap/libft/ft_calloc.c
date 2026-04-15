/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:15:26 by bgebreeg          #+#    #+#             */
/*   Updated: 2025/11/01 17:28:58 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

// #include <stddef.h>
// #include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;
	size_t	i;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total_size)
		((unsigned char *)ptr)[i++] = 0;
	return (ptr);
}

// int main(void)
// {
//     int *arr = ft_calloc(5, sizeof(int));
//     if (arr)
//     printf("%d %d\n", arr[0], arr[4]);
//     free(arr);
// }