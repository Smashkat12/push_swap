/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:41:54 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/18 14:23:48 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if ((n > 0) && s1 && s2)
	{
		while ((s1[i] != '\0') && (s2[i] != '\0')
				&& (i < n) && (s1[i] == s2[i]))
		{
			i++;
			if (i == n)
			{
				return (1);
			}
		}
		if (s1[i] - s2[i] == 0)
		{
			return (1);
		}
		else
			return (0);
	}
	else if (n == 0)
		return (1);
	else
		return (0);
}
