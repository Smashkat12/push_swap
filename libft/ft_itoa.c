/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:12:46 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/12 14:42:22 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_positive(int cnt, int n)
{
	char	*str;

	str = (char *)malloc(cnt + 1);
	if (str)
	{
		str[cnt] = '\0';
		cnt--;
		while (cnt >= 0)
		{
			str[cnt--] = n % 10 + '0';
			n = n / 10;
		}
	}
	return (str);
}

static char		*ft_negative(int cnt, int n)
{
	char	*str;

	str = (char *)malloc(cnt + 2);
	cnt = cnt + 1;
	if (str)
	{
		str[cnt] = '\0';
		cnt--;
		while (cnt >= 1)
		{
			str[cnt--] = (-1) * (n % 10) + '0';
			n = n / 10;
		}
		str[cnt] = '-';
	}
	return (str);
}

char			*ft_itoa(int n)
{
	int		cnt;
	int		sum;
	char	*ptr;

	ptr = NULL;
	sum = n;
	cnt = 0;
	while (sum != 0)
	{
		sum = sum / 10;
		cnt++;
	}
	if (n == 0)
	{
		cnt = 1;
	}
	if (n >= 0)
	{
		ptr = ft_positive(cnt, n);
	}
	else if (n < 0)
	{
		ptr = ft_negative(cnt, n);
	}
	return (ptr);
}
