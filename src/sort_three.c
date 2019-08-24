/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <kmorulan@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 13:12:53 by kmorulan          #+#    #+#             */
/*   Updated: 2019/08/24 15:20:24 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		sort_three(t_list *a_stk)
{
	int			*temp;
	int			b;
	int			a;
	int			c;

	temp = a_stk->content;
	a = *temp;
	temp = a_stk->next->content;
	b = *temp;
	temp = a_stk->next->next->content;
	c = *temp;

	if (a > b && b < c && c > a)
		sort_sa(a_stk);
	else if (a > b && b < c && a > c)
		sort_ra(a_stk);
	else if (a < b && b > c && c < a)
		sort_rra(a_stk);
	else if (a > b && b > c)
	{
		sort_sa(a_stk);
		sort_rra(a_stk);
	}
	else if (b > a && b > c && c > a)
	{
		sort_sa(a_stk);
		sort_ra(a_stk);
	}
}