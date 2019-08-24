/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 07:30:06 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/18 07:53:16 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*root;
	t_list	*temp;

	root = lst;
	temp = root;
	if (lst)
	{
		while (temp != NULL)
		{
			f(temp);
			temp = temp->next;
		}
	}
	else
		return ;
}
