/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:11:37 by ouidriss          #+#    #+#             */
/*   Updated: 2022/09/10 09:58:43 by ouidriss         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	l_s;
	unsigned int	l_d;
	unsigned int	i;

	l_s = cal_lenght(src);
	l_d = cal_lenght(dest);
	i = 0;
	while (size == 0)
	{
		return (l_s);
	}
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (l_s);
}
