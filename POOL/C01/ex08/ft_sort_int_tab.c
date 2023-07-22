/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:08:55 by ouidriss          #+#    #+#             */
/*   Updated: 2022/08/29 14:12:27 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	y;
	int	swap;

	i = 0;
	while (i <= size - 2)
	{
		y = i + 1;
		while (y <= size - 1)
		{
			if (tab[i] > tab[y])
			{
				swap = tab[i];
				tab[i] = tab[y];
				tab[y] = swap;
			}
			y ++;
		}
		i ++;
	}
}
