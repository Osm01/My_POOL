/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:18:13 by ouidriss          #+#    #+#             */
/*   Updated: 2022/08/25 11:46:41 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	value;

	value = 'a';
	while (value <= 'z')
	{
		write(1, &value, 1);
		value = value + 1;
	}
}
