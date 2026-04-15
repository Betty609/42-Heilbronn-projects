/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 17:19:34 by bgebreeg          #+#    #+#             */
/*   Updated: 2025/11/01 17:28:37 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *memory, size_t length)
{
	char	*ptr;
	size_t	count;

	count = 0;
	ptr = (char *)memory;
	while (count < length)
	{
		ptr[count] = 0;
		count++;
	}
}
