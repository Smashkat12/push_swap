/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <kmorulan@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 09:05:16 by kmorulan          #+#    #+#             */
/*   Updated: 2019/08/24 15:20:45 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/push_swap.h"

int			main(int ac, char *av[])
{
	t_list	*a;
	t_list	*b;
	t_list	*temp;
	int		i;
	int		h;
	int		len;

	len = 0;
	i = 1;
	if (ac > 1)
	{
		if (av[i])
		{
			h = ft_atoi(av[i]);
			a = ft_lstnew(&h, sizeof(int));
			i++;
			b = NULL;
		}
		while (i < ac)
		{
			h = ft_atoi(av[i]);
			temp = ft_lstnew(&h, sizeof(int));
			ft_lstadd_end(&a, temp);
			i++;
		}
		len = ft_lstlen(&a);
		sort_three(a);
		display_stak(a);
	}
	return (0);
}
