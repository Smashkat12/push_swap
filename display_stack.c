/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <kmorulan@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 14:19:19 by kmorulan          #+#    #+#             */
/*   Updated: 2019/09/03 09:43:56 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push.h"

void	display_stack(t_stack *a_stk)
{
	t_stack *temp;

	temp = a_stk;
	while (temp)
	{
		ft_putnbr(temp->num);
		write(1, "\n", 1);
		temp = temp->next;
	}
}