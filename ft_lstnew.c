/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sytorium <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:04:53 by sytorium          #+#    #+#             */
/*   Updated: 2024/05/18 18:11:37 by sytorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*res;

	res = (t_list *)ft_calloc(1, sizeof(t_list));
	if (!res)
		return (0);
	res->content = content;
	res->next = 0;
	return (res);
}
