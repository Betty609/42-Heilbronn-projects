/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:39:59 by bgebreeg          #+#    #+#             */
/*   Updated: 2025/11/01 17:52:43 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stddef.h>

// #include <stdio.h>
// #include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	copy = malloc(i + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// int main(void)
// {
//     char *copy1 = ft_strdup("Hello");
//     char *copy2 = ft_strdup("42libft");

//     printf("%s\n", copy1);
//     printf("%s\n", copy2);

//     free(copy1);
//     free(copy2);
// }
