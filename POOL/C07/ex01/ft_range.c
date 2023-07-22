/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:20:52 by ouidriss          #+#    #+#             */
/*   Updated: 2022/09/15 21:33:43 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*range;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	range = (int *) malloc(sizeof(int) * size);
	while (i < size)
	{
		range[i] = min;
		i ++;
		min ++;
	}
	return (range);
}
