/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:43:04 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/12 15:27:10 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		j;
	char	*ptr;

	ptr = (char *)s;
	j = (int)ft_strlen(s);
	if (j == 0)
	{
		return (0);
	}
	while ((s[j] != (char)c) && j >= 0)
	{
		j--;
		if (j == -1)
			return (0);
	}
	return (ptr + j);
}
