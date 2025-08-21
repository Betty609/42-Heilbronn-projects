/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 21:53:12 by bgebreeg          #+#    #+#             */
/*   Updated: 2025/08/01 22:11:41 by bgebreeg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)

{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

/*int	main(void)
{
	ft_is_negative(-6);
	return (0);
}*/
