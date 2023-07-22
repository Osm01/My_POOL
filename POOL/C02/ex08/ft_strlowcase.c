/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:11:33 by ouidriss          #+#    #+#             */
/*   Updated: 2022/09/08 18:26:23 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	alpha;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		alpha = 'A';
		while (alpha <= 'Z')
		{
			if (str[i] == alpha)
			{
				str[i] = alpha + 32;
				break ;
			}
			alpha ++;
		}
		i++;
	}
	return (str);
}
