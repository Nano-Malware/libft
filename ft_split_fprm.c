/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_fprm.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourjal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 21:12:02 by rbourjal          #+#    #+#             */
/*   Updated: 2026/10/20 21:12:07 by rbourjal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(const char *str, char c)
{
	size_t	words;

	words = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
		{
			words++;
			while (*str && *str != c)
				str++;
		}
	}
	return (words);
}

static size_t	word_len(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static void	free_words(char **res, size_t size)
{
	while (size > 0)
	{
		free(res[size - 1]);
		size--;
	}
	free(res);
}

char	**ft_split(const char *str, char c)
{
	char	**res;
	size_t	i;
	size_t	j;

	res = ft_calloc(sizeof(char *), (count_word(str, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (j < count_word(str, c))
	{
		while (str[i] && str[i] == c)
			i++;
		res[j] = ft_substr(str, i, word_len(str + i, c));
		if (!res[j])
		{
			free_words(res, j);
			return (NULL);
		}
		i += word_len(str + i, c);
		j++;
	}
	return (res);
}
