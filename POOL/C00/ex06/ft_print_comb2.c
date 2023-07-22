/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:15:22 by ouidriss          #+#    #+#             */
/*   Updated: 2022/09/01 20:39:23 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y <= 98)
	{
		x = y + 1;
		while (x <= 99)
		{
			ft_print((y / 10) + '0');
			ft_print((y % 10) + '0');
			ft_print(' ');
			ft_print((x / 10) + '0');
			ft_print((x % 10) + '0');
			if (y != 98)
			{
				ft_print(',');
				ft_print(' ');
			}
			x ++;
		}
			y ++;
	}
}
