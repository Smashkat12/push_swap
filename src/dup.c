/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <kmorulan@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 17:06:35 by kmorulan          #+#    #+#             */
/*   Updated: 2019/09/03 09:17:34 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push.h"

int     duplicates(t_stack *stack)
{
    t_stack     *p;
    t_stack     *q;

    p = stack;
    while (p != NULL)
    {
        q = p->next;
        while (q != NULL)
        {
            if (p->num == q->num)
                return (1);
            q = q->next;
        }
        p = p->next;
    }
    return (0);
}

int		valid_input(char **argv)
{
	int	i;
	int j;
	int flag;

	flag = 1;
	i = 1;
	j = 0;
	while (argv[i] && flag)
	{
		j = 0;
		while (argv[i][j] && flag)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				flag = 0;
			}
			j++;
		}
		i++;
	}
	return (flag);
}

int		check_int(t_stack *a_stk, t_stack *nex_node)
{
	int i;
	t_stack *temp;

	i = 1;
	temp = nex_node;
	while (temp)
	{
		if((a_stk->num) > (temp->num))
		{
			i = 0;
		}
		temp = temp->next;
	}
	return (i);
}

int		find_min(t_stack **a_stk)
{
	t_stack *min;
	t_stack *temp;
	int indx;
	int indx2;

	min = *a_stk;
	temp = min->next;
	indx = 0;
	indx2 = 1;
	while (temp)
	{
		if((min->num) > (temp->num))
		{
			min = temp;
			indx = indx2;
		}
		temp = temp->next;
		indx2++;
	}

	if(indx <= (indx2 / 2))
	{
		while(indx != 0)
		{
			sort_ra2(a_stk);
			indx--;
			write(1, "ra\n", 3);
		}
	}
	else
	{
		while(indx != indx2)
		{
			sort_rra2(a_stk);
			indx++;
			write(1, "rra\n", 4);
		}
	}
	return (indx2);
}

void	sort_three(t_stack *a_stk)
{
	int a;
	int b;
	int c;

	a = a_stk->num;
	b = (a_stk->next)->num;
	c = (a_stk->next->next)->num;

	if ((a > b) && (b < c) && (c > a))
	{
		sort_sa(a_stk);
	}
	else if ((a > b) && (b < c) && (a > c))
	{
		sort_ra(a_stk);
	}
	else if ((b > a) && (b > c) && (a > c))
	{
		sort_rra(a_stk);
	}
	else if ((a > b) && (b > c))
	{
		sort_sa(a_stk);
		sort_rra(a_stk);
	}
	else if ((b > a) && (b > c) && (c > a))
	{
		sort_sa(a_stk);
		sort_ra(a_stk);
	}
}