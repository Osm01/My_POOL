/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:54:45 by ouidriss          #+#    #+#             */
/*   Updated: 2022/09/07 13:34:26 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	y;
	int	k;

	i = 0;
	k = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		y = 0;
		if (str[i] == to_find[y])
		{
			k = i;
			while (to_find[y] != '\0')
			{
				if (str[++k] != to_find[++y])
					break ;
			}
			if (to_find[y] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
