/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:37:06 by ouidriss          #+#    #+#             */
/*   Updated: 2022/09/15 21:34:22 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*r;
	int	size;
	int	i;

	size = max - min;
	i = 0;
	r = (int *) malloc(sizeof(int) * size);
	if (!r)
	{
		return (-1);
	}
	else
	{
		while (i < size)
		{
			r[i] = min;
			min ++;
			i ++;
		}
	}
	range = &r;
	return (size);
}
