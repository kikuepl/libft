/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sytorium <sytorium@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:41:53 by sytorium          #+#    #+#             */
/*   Updated: 2024/05/18 17:44:07 by sytorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*arr;
	unsigned char	*tgt;

	i = 0;
	arr = (unsigned char *) dst;
	tgt = (unsigned char *) src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		arr[i] = tgt[i];
		i++;
	}	
	return (dst);
}
