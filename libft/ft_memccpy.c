/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 07:48:25 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/12 14:44:08 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dstptr;
	unsigned char	*srcptr;
	unsigned char	chr;

	i = 0;
	dstptr = (unsigned char *)dst;
	srcptr = (unsigned char *)src;
	chr = (unsigned char)c;
	while (i < n)
	{
		dstptr[i] = srcptr[i];
		if (srcptr[i] == chr)
		{
			return (dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
