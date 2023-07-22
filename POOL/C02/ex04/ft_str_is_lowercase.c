/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:50:25 by ouidriss          #+#    #+#             */
/*   Updated: 2022/08/30 16:55:25 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

int	searsh_if_low(char *str, int len)
{
	char	alpha;
	int		inc;
	int		i;

	inc = 0;
	i = 0;
	while (str[i] != '\0')
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			if (str[i] == alpha)
			{
				inc ++;
				break ;
			}
			alpha ++;
		}
		i++;
	}
	if (len == inc)
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	re;
	int	len;

	len = ft_strlen(str);
	re = searsh_if_low(str, len);
	return (re);
}
