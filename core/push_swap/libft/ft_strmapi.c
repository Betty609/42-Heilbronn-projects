/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:40:41 by bgebreeg          #+#    #+#             */
/*   Updated: 2025/11/01 19:57:23 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

// char add_index(unsigned int i, char c)
// {
//     return (c + i); // shifts each char by its index
// }

// char to_upper(unsigned int i, char c)
// {
//     (void)i; // we ignore index
//     if (c >= 'a' && c <= 'z')
//         return (c - 32);
//     return (c);
// }

// int main(void)
// {
//     printf("%s\n", ft_strmapi("abc", add_index));   // "ace"
//     printf("%s\n", ft_strmapi("hello", to_upper));  // "HELLO"
// }
