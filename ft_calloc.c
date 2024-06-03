/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sytorium <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 20:02:55 by sytorium          #+#    #+#             */
/*   Updated: 2024/05/18 17:42:17 by sytorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (size && count > SIZE_MAX / size)
		return (0);
	res = malloc(count * size);
	if (!res)
		return (0);
	else
		ft_bzero(res, size * count);
	return (res);
}
