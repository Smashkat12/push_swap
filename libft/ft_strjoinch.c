/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 14:34:03 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/29 15:19:47 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinch(char const *s, char c)
{
	size_t	i;
	size_t	s_len;
	char	*str;

	if (!s || !c)
	{
		return (NULL);
	}
	s_len = ft_strlen(s);
	str = ft_strnew(s_len + 1);
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	while (i < s_len)
	{
		*(str + i) = *(s + i);
		i++;
	}
	*(str + i) = c;
	return (str);
}
