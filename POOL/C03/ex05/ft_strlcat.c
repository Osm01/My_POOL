/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 22:17:40 by ouidriss          #+#    #+#             */
/*   Updated: 2022/09/10 20:16:52 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cal_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l_s;
	unsigned int	l_d;
	unsigned int	i;

	l_s = cal_lenght(src);
	l_d = cal_lenght(dest);
	i = 0;
	while (l_d >= size)
	{
		return (l_d + size);
	}
	while (src[i] && i < size - 1)
	{
		dest[l_d] = src[i];
		i ++;
		l_d ++;
	}
	dest[i] = '\0';
	return (l_s + size);
}
