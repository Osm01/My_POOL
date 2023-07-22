/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:31:35 by ouidriss          #+#    #+#             */
/*   Updated: 2022/08/30 18:06:19 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	alpha;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			if (str[i] == alpha)
			{
				str[i] = alpha - 32;
				break ;
			}
			alpha ++;
		}
		i++;
	}
	return (str);
}
