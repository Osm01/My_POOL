/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:00:07 by ouidriss          #+#    #+#             */
/*   Updated: 2022/09/07 12:49:16 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	while (src[y] != '\0')
	{
		if (y < nb)
		{
			dest[i] = src[y];
			i ++;
			y ++;
		}
		else
			break ;
	}
	dest[i] = '\0';
	return (dest);
}
