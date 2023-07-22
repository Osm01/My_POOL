/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalizee.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouidriss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:10:42 by ouidriss          #+#    #+#             */
/*   Updated: 2022/09/08 17:46:01 by ouidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	l_case(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i ++;
	}
}

int	iscapt(char c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z') && (c < '0' || c > '9'))
	{
		return (1);
	}
	return (0);
}

int	_isalpha(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	l_case(str);
	while (str[i])
	{
		if (_isalpha(str[i]) == 1)
		{
			if (iscapt(str[i - 1]) == 1)
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
