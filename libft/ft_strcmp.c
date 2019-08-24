/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:01:28 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/21 15:07:07 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	if ((((unsigned char *)s1)[i] - ((unsigned char*)s2)[i]) < 0)
	{
		return (-1);
	}
	else if ((((unsigned char *)s1)[i] - ((unsigned char*)s2)[i]) > 0)
	{
		return (1);
	}
	else
	{
		return (((unsigned char *)s1)[i] - ((unsigned char*)s2)[i]);
	}
}
