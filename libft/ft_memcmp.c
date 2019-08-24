/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 07:33:56 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/10 17:15:01 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1ptr;
	unsigned char	*s2ptr;

	i = 0;
	s1ptr = (unsigned char *)s1;
	s2ptr = (unsigned char *)s2;
	while (i < n)
	{
		if (s1ptr[i] == s2ptr[i])
		{
			i++;
		}
		else
		{
			return (s1ptr[i] - s2ptr[i]);
		}
	}
	return (0);
}
