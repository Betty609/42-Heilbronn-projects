/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 04:03:09 by bgebreeg          #+#    #+#             */
/*   Updated: 2025/11/01 21:16:04 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (in_word == 0)
		{
			count++;
			in_word = 1;
		}
		s++;
	}
	return (count);
}

static char	*ft_word_dup(const char *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	ft_fill_result(char **result, char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		word_index;

	i = 0;
	word_index = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = i;
			while (s[j] && s[j] != c)
				j++;
			result[word_index++] = ft_word_dup(s, i, j);
			i = j;
		}
		else
			i++;
	}
	result[word_index] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	ft_fill_result(result, s, c);
	return (result);
}
