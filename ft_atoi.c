/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sytorium <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:30:28 by sytorium          #+#    #+#             */
/*   Updated: 2024/05/18 17:42:01 by sytorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_ouf(size_t num, int digit, int sign)
{
	size_t	nex;

	nex = 10 * num;
	if (sign == 1 && nex > (size_t)LONG_MAX - digit)
		return (1);
	if (sign == -1 && nex > (size_t)LONG_MAX + 1 - digit)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t	res;
	int		sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (9 <= *str && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		if (is_ouf(res, *str - '0', sign))
			return (-(sign + 1) / 2);
		res *= 10;
		res += *str++ - '0';
	}
	return (res * sign);
}
