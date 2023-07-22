/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:55:38 by ouidriss          #+#    #+#             */
/*   Updated: 2022/08/31 15:24:17 by ouidriss         ###   ########.fr       */
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

int	searsh_if_isalpha(char *str, int len)
{
	char	alpha;
	int		inc;
	int		i;

	inc = 0;
	i = 0;
	while (str[i] != '\0')
	{
		alpha = 'A';
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			inc ++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			inc ++;
		}
		i++;
	}
	if (len == inc)
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	re;
	int	len;

	len = ft_strlen(str);
	re = searsh_if_isalpha(str, len);
	return (re);
}
