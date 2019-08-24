/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 11:51:56 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/12 14:47:56 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dptr;
	char	*sptr;

	dptr = (char *)dst;
	sptr = (char *)src;
	i = 0;
	if ((dptr == sptr) || (len == 0))
		return (dst);
	if (dst > src)
	{
		while (len--)
		{
			dptr[len] = sptr[len];
		}
	}
	else
	{
		while (i < len)
		{
			dptr[i] = sptr[i];
			i++;
		}
	}
	return (dst);
}
