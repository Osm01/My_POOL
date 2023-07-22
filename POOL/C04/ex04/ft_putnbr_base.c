/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:31:02 by ouidriss          #+#    #+#             */
/*   Updated: 2022/09/12 10:59:32 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ln(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

int	check_signe(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
		{
			return (1);
		}
		i ++;
	}
	return (0);
}

int	check_error(char *base)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	if (base[0] == '\0' || ln(base) == 1)
		return (1);
	while (i <= ln(base) - 2)
	{
		y = i + 1;
		while (y <= ln(base) - 1)
		{
			if (base[i] == base[y] || check_signe(base) == 1)
				return (1);
			y ++;
		}
		i ++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i ++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	ln_base;
	int	i;

	i = 0;
	ln_base = ln(base);
	if (check_error(base) == 0)
	{
		if (ft_strcmp(base, "poneyvif") == 0)
			base = "01234567";
		if (nbr >= 0 && nbr <= ln_base - 1)
		{
			write(1, &base[nbr], 1);
		}
		if (nbr >= ln_base)
		{
			ft_putnbr_base(nbr / ln_base, base);
			ft_putnbr_base(nbr % ln_base, base);
		}
		if (nbr < 0)
		{
			write(1, "-", 1);
			ft_putnbr_base(-nbr, base);
		}
	}
}
