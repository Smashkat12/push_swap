/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:39:28 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/12 15:14:38 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ptr;

	i = 0;
	if (s)
	{
		ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (ptr == NULL)
			return (NULL);
		else
		{
			while (*(s + i))
			{
				ptr[i] = f(s[i]);
				i++;
			}
			ptr[i] = '\0';
			return (ptr);
		}
	}
	else
	{
		return (NULL);
	}
}
