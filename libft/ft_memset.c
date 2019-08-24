/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 11:10:03 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/12 14:48:49 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bptr;
	unsigned char	chr;
	size_t			i;

	i = 0;
	bptr = (unsigned char *)b;
	chr = (unsigned char)c;
	while (i < len)
	{
		bptr[i] = chr;
		i++;
	}
	return (b);
}
