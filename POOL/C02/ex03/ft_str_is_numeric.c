/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:38:42 by ouidriss          #+#    #+#             */
/*   Updated: 2022/08/30 13:39:00 by ouidriss         ###   ########.fr       */
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

int	searsh_if_isnumber(char *str, int len)
{
	char	alpha;
	int		inc;
	int		i;

	inc = 0;
	i = 0;
	while (str[i] != '\0')
	{
		alpha = '0';
		while (alpha <= '9')
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

int	ft_str_is_numeric(char *str)
{
	int	re;
	int	len;

	len = ft_strlen(str);
	re = searsh_if_isnumber(str, len);
	return (re);
}
