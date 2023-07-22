/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:25:56 by ouidriss          #+#    #+#             */
/*   Updated: 2022/09/15 21:35:38 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ln_strs(int size, char **str)
{
	int	i;
	int	y;
	int	z;

	i = 0;
	z = 0;
	while (i < size)
	{
		y = 0;
		while (y < str[i][y])
		{
			z ++;
			y ++;
		}
		i ++;
	}
	return (z);
}

int	ln(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

int	conc_with_sep(int i, int size, int z, char *join)
{
	int	m;

	m = 0;
	if (i + 1 < size)
	{
		while (m < ln(sep))
		{
			join[z] = sep[m];
			z ++;
			m ++;
		}
	}
	return (z);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		i;
	int		y;
	int		z;

	join = 0;
	if (size == 0)
		return (join);
	i = 0;
	z = 0;
	join = malloc(sizeof(char) * (ln_strs(size, strs) + (size * ln(sep))));
	while (i < size)
	{
		y = 0;
		while (y < ln(strs[i]))
		{
			join[z] = strs[i][y];
			z ++;
			y ++;
		}
		z = conc_with_sep(i, size, z, join);
		i++;
	}
	join[z] = '\0';
	return (join);
}
