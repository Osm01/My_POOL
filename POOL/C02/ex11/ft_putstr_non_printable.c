/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:13:11 by ouidriss          #+#    #+#             */
/*   Updated: 2022/09/08 11:06:16 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

int	sreash_no_printable(char c)
{
	if (c >= 0 && c <= 31)
		return (1);
	else
		return (0);
}

char	*conv_hex(char nb)
{
	char	t[2];
	int		temp;
	int		i;
	char	*s;

	t[0] = '0';
	t[1] = '0';
	i = 0;
	temp = 0;
	while (nb != 0)
	{
		temp = nb % 16;
		if (temp < 10)
		{
			t[i] = temp + '0';
		}
		else
		{
			t[i] = temp + 87;
		}
		i ++;
		nb = nb / 16 ;
	}
	s = t;
	return (s);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		no_p_dec;
	char	*s;

	no_p_dec = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (sreash_no_printable(str[i]) == 1)
		{
			no_p_dec = str[i] - 0;
			s = conv_hex(no_p_dec);
			ft_printchar(92);
			ft_printchar(s[1]);
			ft_printchar(s[0]);
		}
		else
		{
			ft_printchar(str[i]);
		}
		i ++;
	}
}
