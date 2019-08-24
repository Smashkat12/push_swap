/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 14:16:39 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/12 15:13:49 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	i = ft_strlen(dst);
	j = 0;
	k = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	while ((k < (dstsize - dstlen - 1)) && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
		k++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}
