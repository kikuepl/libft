/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sytorium <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:35:15 by sytorium          #+#    #+#             */
/*   Updated: 2024/05/18 17:47:23 by sytorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*res;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && check(s1[start], set))
		start++;
	while (start < end && check(s1[end - 1], set))
		end--;
	res = ft_calloc(end - start + 1, sizeof(char));
	if (!res)
		return (0);
	ft_memcpy(res, s1 + start, end - start);
	return (res);
}
