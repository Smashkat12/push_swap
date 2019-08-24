/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:56:02 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/12 15:24:05 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char	*res;
	size_t	i;

	i = 0;
	res = (char *)malloc((sizeof(char)) * (n + 1));
	if (!(res))
	{
		return (NULL);
	}
	while (i < n)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
