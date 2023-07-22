/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:12:25 by ouidriss          #+#    #+#             */
/*   Updated: 2022/09/12 16:48:20 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	signe;

	i = 0;
	num = 0;
	signe = 1;
	while (str[i] <= ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i ++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
				signe *= -1;
			i ++;
	}
	while (str[i] >= '0' && str[i] <= '9' )
	{
		num = (num * 10) + str[i] - 48;
		i ++;
	}
	return (num * signe);
}
