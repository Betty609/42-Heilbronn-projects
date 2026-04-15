/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:05:21 by bgebreeg          #+#    #+#             */
/*   Updated: 2025/08/01 23:48:39 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	blue;

	blue = 'a';
	while (blue <= 'z')
	{
		write(1, &blue, 1);
		blue ++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
