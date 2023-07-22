/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:20:06 by ouidriss          #+#    #+#             */
/*   Updated: 2022/09/10 09:50:27 by ouidriss         ###   ########.fr       */
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

int	searsh_if_printable(char *str, int len)
{
	char	alpha;
	int		inc;
	int		i;

	inc = 0;
	i = 0;
	while (str[i] != '\0')
	{
		alpha = 32;
		while (alpha <= 126)
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

int	ft_str_is_printable(char *str)
{
	int	re;
	int	len;

	if (str[0] == '\0')
	{
		return (1);
	}
	len = ft_strlen(str);
	re = searsh_if_printable(str, len);
	return (re);
}
