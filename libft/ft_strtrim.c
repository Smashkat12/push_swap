/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:25:45 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/20 17:32:58 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	len;

	start = 0;
	if (!s)
	{
		return (NULL);
	}
	while ((s[start] == ' ' || s[start] == '\n' || s[start] == '\t'))
	{
		start++;
	}
	if (s[start] == '\0')
	{
		return (ft_strdup(s + start));
	}
	len = ft_strlen(s) - 1;
	while ((s[len] == ' ' || s[len] == '\n' || s[len] == '\t') && len > 0)
	{
		len--;
	}
	return (ft_strsub(s, start, len - start + 1));
}
