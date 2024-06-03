/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sytorium <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:18:43 by sytorium          #+#    #+#             */
/*   Updated: 2024/05/18 17:46:23 by sytorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*ptr;
	size_t	size1;
	size_t	size2;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	str = ft_calloc(size1 + size2 + 1, sizeof(char));
	ptr = str;
	if (!str)
		return (0);
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	return (ptr);
}
