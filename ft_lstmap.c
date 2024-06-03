/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sytorium <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 20:39:11 by sytorium          #+#    #+#             */
/*   Updated: 2024/05/19 14:37:18 by sytorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*tmp;
	void	*temp;

	res = 0;
	if (!lst || !del || !f)
		return (NULL);
	while (lst)
	{
		temp = f(lst -> content);
		tmp = ft_lstnew(temp);
		if (!tmp)
		{
			del(temp);
			ft_lstclear(&res, (*del));
			return (res);
		}
		ft_lstadd_back(&res, tmp);
		lst = lst -> next;
	}
	return (res);
}
