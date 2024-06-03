/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sytorium <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 21:23:57 by sytorium          #+#    #+#             */
/*   Updated: 2024/05/18 17:44:15 by sytorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*arr;
	unsigned char	*tgt;

	arr = (unsigned char *) dest;
	tgt = (unsigned char *) src;
	if (!dest && !src)
		return (0);
	if (src < dest)
	{
		i = len;
		while (i)
		{
			arr[i - 1] = tgt[i - 1];
			i--;
		}
	}
	else
	{
		while (len--)
			*arr++ = *tgt++;
	}
	return (dest);
}
