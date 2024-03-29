/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 09:38:17 by ouidriss          #+#    #+#             */
/*   Updated: 2022/09/12 21:36:45 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	n;

	i = 0;
	n = nb;
	while (n > i * i)
	{
		i ++;
	}
	if (n == i * i)
	{
		return (i);
	}
	return (0);
}
