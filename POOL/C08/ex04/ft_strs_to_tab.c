/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:13:44 by ouidriss          #+#    #+#             */
/*   Updated: 2022/09/12 19:07:11 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_stock_str.h"

int	ln(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

char	*cpy(char *str,char *to_cpy)
{
	int i = 0;
	while (str[i] != '\0')
	{
		to_cpy[i] = str[i];
		i ++;
	}
	return to_cpy;
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i = 0;
	int y = 0;
	struct *s_stock_str;
	s_strs_str = malloc(struct s_stock_str * ac);
	while (i < ac)
	{
		s_stock_str[i].size = ln(&av[i]);
		s_stock_str[i].str = malloc(sizeof(char) * ln(str));
		s_stock_str[i].cpy = malloc(sizeof(char) * ln(str));
		s_stock_str[i].str = cpy(&av[i],s_stock_str[i].str);
		s_stock_str[i].cpy = s_stock_str[i].str;
		i++;
	}	
}
