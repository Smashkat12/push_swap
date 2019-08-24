/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 10:43:16 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/17 10:46:15 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstlen(t_list **alst)
{
	t_list	*temp;
	int		count;

	temp = *alst;
	count = 0;
	while (temp != NULL)
	{
		count++;
		temp = (*temp).next;
	}
	return (count);
}
