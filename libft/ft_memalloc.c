/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:26:26 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/10 15:26:38 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *new_mem;

	new_mem = malloc(size);
	if (new_mem == NULL)
	{
		return (NULL);
	}
	ft_bzero(new_mem, size);
	return (new_mem);
}
