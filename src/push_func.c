/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <kmorulan@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 13:17:58 by kmorulan          #+#    #+#             */
/*   Updated: 2019/09/03 13:34:58 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push.h"

void	pa(t_stack **b_stk, t_stack **a_stk)
{
	t_stack *temp;

	if(*b_stk == NULL)
	{
		*b_stk = *a_stk;
		*a_stk = (*a_stk)->next;
		(*b_stk)->next = NULL;
	}
	else if(*b_stk)
	{
		temp = *a_stk;
		*a_stk = (*a_stk)->next;
		temp->next = *b_stk;
		*b_stk = temp;
	}
	write(1, "pa\n", 3);
}
void	pb(t_stack **a_stk, t_stack **b_stk)
{
	t_stack *temp;

	if(*b_stk == NULL)
	{
		*b_stk = *a_stk;
		*a_stk = (*a_stk)->next;
		(*b_stk)->next = NULL;
	}
	else if(*b_stk)
	{
		temp = *a_stk;
		*a_stk = (*a_stk)->next;
		temp->next = *b_stk;
		*b_stk = temp;
	}
	write(1, "pb\n", 3);
}