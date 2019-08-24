/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <kmorulan@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 09:08:23 by kmorulan          #+#    #+#             */
/*   Updated: 2019/08/24 15:15:25 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"

void		sort_three(t_list *a_stk);
void		sort_sa(t_list *a_stk);
void		sort_ra(t_list *a_stk);
void		sort_rra(t_list *a_stk);
void		print_nbr(int *content);
void		display_stak(t_list *a_stk);
#endif