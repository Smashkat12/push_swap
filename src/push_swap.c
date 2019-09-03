/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <kmorulan@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 09:05:16 by kmorulan          #+#    #+#             */
/*   Updated: 2019/09/03 09:19:12 by kmorulan         ###   ########.fr       */
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

int		is_sort(t_stack *a_stk)
{
	t_stack *temp1;
	t_stack *temp2;
	int		pos;

	temp1 = a_stk;
	temp2 = a_stk->next;
	pos = 1;
	while(temp2 != NULL)
	{
		if(temp1->num > temp2->num)
		{
			pos = 0;
			return (pos);
		}
		temp1 = temp2;
		temp2 = temp2->next;
	}
	return (pos);
}
void	handler(t_stack **a_stk, t_stack **b_stk)
{
	t_stack *a;
	t_stack *b;
	int	len;
	int i;

	len = 0;
	i = 1;
	a = *a_stk;
	b = *b_stk;
	while (i)
	{
		if(check_int(a,(a->next->next)) && check_int(a->next, (a->next->next)) && is_sort(a->next->next))
		{
			if((a->num) > (a->next->num))
			{
				sort_sa(a);
			}
			else
			{
				if(b)
				{
					len = ft_lstlen(&b);
					while (len != 0)
					{
						pa(&a,&b);
						len--;
					}
				}
				i = 0;
			}
		}
		else if((check_int(a,(a->next->next)) || check_int(a->next, (a->next->next))) && ((len = ft_lstlen(&a)) > 3))
		{
			if(a->num < (a->next->num))
			{
				pb(&a,&b);
			}
			else
			{
				sort_sa(a);
				pb(&a,&b);
			}
		}
		else
		{
			if(len == 3)
			{
				sort_three(a);
			}
			else
			{
				find_min(&a);
			}
		}
	}	
}
int		main(int argc, char *argv[])
{
	t_stack *a;
	t_stack *b;

	if (argc >= 2)
	{
		if (valid_input(argv))
		{
			a = creat_stack(argv, argc);
			b = NULL;
			if (duplicates(a))
			{
				ft_putendl("Error");
				return (0);
			}
			handler(&a,&b);
			free_stacks(&a);
			free_stacks(&b);
		}
	}
	return (0);
}