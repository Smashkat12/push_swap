/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <kmorulan@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 10:45:51 by kmorulan          #+#    #+#             */
/*   Updated: 2019/08/24 10:55:04 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd_end(t_list **alst, t_list *new)
{
	t_list	*temp;

	temp = *alst;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->next = NULL;
}