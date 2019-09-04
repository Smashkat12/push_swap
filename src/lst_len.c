/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <kmorulan@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 09:30:32 by kmorulan          #+#    #+#             */
/*   Updated: 2019/09/03 13:34:50 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push.h"

int		ft_lstlen(t_stack **a_stk)
{
	t_stack *temp;
	int		cnt;

	temp = *a_stk;
	cnt = 0;
	while (temp != NULL)
	{
		cnt++;
		temp = temp->next;
	}
	return (cnt);
}