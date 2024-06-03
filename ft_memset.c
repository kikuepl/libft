/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sytorium <sytorium@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:14:58 by sytorium          #+#    #+#             */
/*   Updated: 2024/05/18 17:44:22 by sytorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*arr;

	i = 0;
	arr = (unsigned char *)b;
	while (i < len)
	{
		arr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
