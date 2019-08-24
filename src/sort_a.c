/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <kmorulan@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 12:29:36 by kmorulan          #+#    #+#             */
/*   Updated: 2019/08/24 15:17:10 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		sort_sa(t_list *a_stk)
{
	int			*temp;
	int			b;
	int			a;

	temp = a_stk->content;
	a = *temp;
	temp = a_stk->next->content;
	b = *temp;

	free(a_stk->content);
	a_stk->content = malloc(sizeof(int));
	ft_memcpy(a_stk->content,&b,sizeof(int));
	free(a_stk->next->content);
	a_stk->next->content = malloc(sizeof(int));
	ft_memcpy(a_stk->next->content,&a, sizeof(int));
}

void		sort_ra(t_list *a_stk)
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
	free(a_stk->next->next->content);
	a_stk->next->next->content = malloc(sizeof(int));
	ft_memcpy(a_stk->next->next->content, &a, sizeof(int));
	free(a_stk->next->content);
	a_stk->next->content = malloc(sizeof(int));
	ft_memcpy(a_stk->next->content, &c, sizeof(int));
	free(a_stk->content);
	a_stk->content = malloc(sizeof(int));
	ft_memcpy(a_stk->content, &b, sizeof(int));
}

void		sort_rra(t_list *a_stk)
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
	free(a_stk->content);
	a_stk->content = malloc(sizeof(int));
	ft_memcpy(a_stk->content, &c, sizeof(int));
	free(a_stk->next->content);
	a_stk->next->content = malloc(sizeof(int));
	ft_memcpy(a_stk->next->content, &a, sizeof(int));
	free(a_stk->next->next->content);
	a_stk->next->next->content = malloc(sizeof(int));
	ft_memcpy(a_stk->next->next->content, &b, sizeof(int));


}