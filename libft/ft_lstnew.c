/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 18:32:45 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/17 15:06:19 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	if (content == NULL)
	{
		(*list).content = NULL;
		(*list).content_size = 0;
	}
	else
	{
		(*list).content = malloc(content_size);
		if ((*list).content == NULL)
		{
			return (NULL);
		}
		else
		{
			ft_memcpy((*list).content, content, content_size);
			(*list).content_size = content_size;
		}
	}
	(*list).next = NULL;
	return (list);
}
