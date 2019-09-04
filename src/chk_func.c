/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chk_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <kmorulan@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 09:27:44 by kmorulan          #+#    #+#             */
/*   Updated: 2019/09/03 13:33:56 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push.h"

t_stack		*creat_stack(char **src, int nums)
{
	t_stack		*head;
	t_stack		*tail;
	t_stack		*temp;

	int i;

	i = 2;
	head = malloc(sizeof (t_stack));
	head->num = ft_atoi(src[1]);
	head->next = NULL;
	tail = head;

	while (i < nums)
	{
		temp = malloc(sizeof(t_stack));
		temp->num = ft_atoi(src[i]);
		temp->next = NULL;
		tail->next = temp;
		tail = temp;
		i++;
	}
	return (head);
}
void	free_stacks(t_stack **a_stk)
{
	t_stack *temp;

	while(*a_stk)
	{
		temp = *a_stk;
		*a_stk = (*a_stk)->next;
		temp->num = 0;
		free(temp);
	}
}
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
int		is_sort(t_stack *a_stk)
{
	t_stack *temp1;
	t_stack *temp2;
	int		pos;

	pos = 1;
	if (a_stk && (a_stk->next))
	{
		temp1 = a_stk;
		temp2 = a_stk->next;
		while (temp2 != NULL)
		{
			if (temp1->num > temp2->num)
			{
				pos = 0;
				return (pos);
			}
			temp1 = temp2;
			temp2 = temp2->next;
		}
	}
	return (pos);
}
