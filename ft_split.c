/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sytorium <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:13:30 by sytorium          #+#    #+#             */
/*   Updated: 2024/05/18 17:45:26 by sytorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sep(char s, char c)
{
	return (s == c);
}

static int	word_count(char const *s, char c)
{
	size_t	res;
	int		in_word;

	res = 0;
	in_word = 0;
	while (*s)
	{
		if (!is_sep(*s, c) && in_word == 0)
		{
			in_word = 1;
			res++;
		}
		else if (is_sep(*s, c))
			in_word = 0;
		s++;
	}
	return (res);
}

static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static void	*free_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	count;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	count = word_count(s, c);
	res = (char **)ft_calloc(count + 1, sizeof(char *));
	if (!res)
		return (0);
	while (*s)
	{
		if (!is_sep(*s, c))
		{
			res[i] = ft_substr(s, 0, word_len(s, c));
			if (!res[i++])
				return (free_split(res));
			s += word_len(s, c);
		}
		else
			s++;
	}
	return (res);
}
