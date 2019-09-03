/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <kmorulan@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 09:27:04 by kmorulan          #+#    #+#             */
/*   Updated: 2019/09/03 09:44:07 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push.h"
#include "get_next_line.h"

void     do_steps(char *str, t_stack **a_stk, t_stack **b_stk)
{
    if (ft_strcmp(str, "sa") == 0)
		chksort_sa(*a_stk);
	if (ft_strcmp(str, "sb") == 0)
		chksort_sa(*b_stk);
 	if (ft_strcmp(str, "pa") == 0)
		chksort_pa(a_stk,b_stk);
 	if (ft_strcmp(str, "pb") == 0)
		chksort_pb(a_stk,b_stk);
 	if (ft_strcmp(str, "ra") == 0)
		chksort_ra2(a_stk);
 	if (ft_strcmp(str, "rb") == 0)
		chksort_ra2(b_stk);
 	if (ft_strcmp(str, "rra") == 0)
		chksort_rra2(a_stk);
 	if (ft_strcmp(str, "rrb") == 0)
		chksort_rra2(b_stk);
 	if (ft_strcmp(str, "ss") == 0)
	{
		chksort_sa(*a_stk);
		chksort_sa(*b_stk);
	}
	if (ft_strcmp(str, "rr") == 0)
	{
		chksort_ra2(a_stk);
		chksort_ra2(b_stk);
	}
	if (ft_strcmp(str, "rrr") == 0)
	{
		chksort_rra2(a_stk);
		chksort_rra2(b_stk);
	}
}
static	void		read_stdin(t_stack **a_stk, t_stack **b_stk)
{
    char        *line;
    while (get_next_line(0, &line))
    {
        do_steps(line, a_stk, b_stk);
    }
}
int		main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;

	a = NULL;
	b = NULL;
	if (argc >= 2)
	{
		if (valid_input(argv))
		{
			a = creat_stack(argv, argc);
			if (duplicates(a))
			{
				ft_putendl("Error");
				return (0);
			}
			read_stdin(&a,&b);
			if (is_sort(a) && (b == NULL))
				ft_putendl("OK");
			else
				ft_putendl("KO");
			free_stacks(&a);
			free_stacks(&b);
		}
		else
		{
			ft_putendl("Error");
		}
	}
	return (0);
}
