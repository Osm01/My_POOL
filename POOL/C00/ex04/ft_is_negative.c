/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:04:37 by ouidriss          #+#    #+#             */
/*   Updated: 2022/08/27 12:04:52 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_is_negative(int n)
{	
	char	v;

	v = 'q';
	if (n >= 0)
	{
		v = 'P';
	}
	else
	{
		v = 'N';
	}
	write(1, &v, 1);
}
