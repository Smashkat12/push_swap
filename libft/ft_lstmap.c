/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 07:54:32 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/18 13:37:24 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;
	t_list	*new;

	if (!lst)
	{
		return (NULL);
	}
	else
	{
		list = f(lst);
		new = list;
		while (lst->next != NULL)
		{
			lst = lst->next;
			if (!(list->next = f(lst)))
			{
				free(list);
				return (NULL);
			}
			list = list->next;
		}
		return (new);
	}
}
