/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:22:06 by ouidriss          #+#    #+#             */
/*   Updated: 2022/09/13 20:26:16 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	y;

	i = argc - 1;
	while (i > 0)
	{
		y = 0;
		while (argv[i][y] != '\0')
		{
			print(argv[i][y]);
			y ++;
		}
		print('\n');
		i --;
	}
}
