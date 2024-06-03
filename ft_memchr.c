/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sytorium <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:15:28 by sytorium          #+#    #+#             */
/*   Updated: 2024/05/18 17:43:50 by sytorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t	index;

	index = 0;
	while (index < num)
	{
		if (((unsigned char *)ptr)[index] == (unsigned char )value)
			return ((unsigned char *)ptr + index);
		index++;
	}
	return (0);
}
