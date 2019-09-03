/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <kmorulan@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 09:08:23 by kmorulan          #+#    #+#             */
/*   Updated: 2019/09/03 09:33:24 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_H
# define PUSH_H
# include "../libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct	s_stack{
	int			num;
	struct s_stack	*next;
}				t_stack;

void	sort_three(t_stack *a_stk);
void	sort_sa(t_stack *a_stk);
void	sort_ra(t_stack *a_stk);
void	sort_rra(t_stack *a_stk);
void	sort_rra2(t_stack **a_stk);
void	sort_ra2(t_stack **a_stk);
void	pa(t_stack **a_stk, t_stack **b_stk);
void	pb(t_stack **a_stk, t_stack **b_stk);
void	chksort_sa(t_stack *a_stk);
void	chksort_ra(t_stack *a_stk);
void	chksort_rra(t_stack *a_stk);
void	chksort_rra2(t_stack **a_stk);
void	chksort_ra2(t_stack **a_stk);
void	chksort_pa(t_stack **a_stk, t_stack **b_stk);
void	chksort_pb(t_stack **a_stk, t_stack **b_stk);
void	handler(t_stack **a_stk, t_stack **b_stk);
int		is_sort(t_stack *a_stk);
int		find_min(t_stack **a_stk);
int		check_int(t_stack *a_stk, t_stack *nex_node);
int		ft_lstlen(t_stack **a_stk);
void	display_stack(t_stack *a_stk);
void	free_stacks(t_stack **a_stk);
void	do_steps(char *str, t_stack **a_stk, t_stack **b_stk);
t_stack	*creat_stack(char **src, int nums);
int     duplicates(t_stack *stack);
int		valid_input(char **argv);
#endif
