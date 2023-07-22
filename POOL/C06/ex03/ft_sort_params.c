/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:05:22 by ouidriss          #+#    #+#             */
/*   Updated: 2022/09/13 20:42:17 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	print(char **argv, int argc)
{
	int	i;
	int	y;

	i = 1;
	while (i < argc)
	{
		y = 0;
		while (argv[i][y])
		{
			putchar(argv[i][y]);
			y ++;
		}
		putchar('\n');
		i ++;
	}
}

int	cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
	{
		i ++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int		i;
	int		k;
	char	*swap;

	i = 1;
	k = 0;
	while (i <= argc - 2)
	{
		k = i + 1;
		while (k <= argc - 1)
		{
			if (cmp(argv[i], argv[k]) > 0)
			{
				swap = argv[i];
				argv[i] = argv[k];
				argv[k] = swap;
			}
			k++;
		}
		i ++;
	}
	print(argv, argc);
}
