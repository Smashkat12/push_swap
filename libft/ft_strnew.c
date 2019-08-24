/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:42:17 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/10 15:42:27 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *new_str;

	new_str = (char *)malloc(sizeof(char) * (size + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	ft_bzero(new_str, size + 1);
	return (new_str);
}
