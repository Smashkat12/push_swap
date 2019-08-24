/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:33:05 by kmorulan          #+#    #+#             */
/*   Updated: 2019/07/31 11:20:40 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_digit(char c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}

static	int	spaces(char c)
{
	if (c == '\n' || c == '\t' || c == '\f')
		return (1);
	else if (c == '\v' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

static	int	parity(char c)
{
	if (c == 43 || c == 45)
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int j;
	int i;
	int sum;

	i = 0;
	j = 0;
	sum = 0;
	while ((str[i]) && (spaces(str[i]) || parity(str[i]) || is_digit(str[i])))
	{
		if (parity(str[i]) || is_digit(str[i]))
		{
			if (parity(str[i]))
				i++;
			while (is_digit(str[i + j]))
			{
				sum = (sum * 10) + (str[i + (j++)] - 48);
			}
			return (sum);
		}
		i++;
	}
	return (sum);
}
