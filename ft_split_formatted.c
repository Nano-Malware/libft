/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_formatted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourjal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:53:26 by rbourjal          #+#    #+#             */
/*   Updated: 2026/10/19 13:53:30 by rbourjal         ###   ########.fr       */
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

char **creating_words(char **res, size_t i, size_ j, char c)
{
	i = 0;
	j = 0;
  while (j < count_word(str, c))
  {
    while (str[i] && str[i] == c)
      i++;
    len = word_len(str + i, c);
    res[j] = ft_substr(str, i, word_len(str + i, c));
    if (!res[j])
    {
      free_words(res, j);
      return (NULL);
    }
    i += word_len(str + i, c);
    j++;
  }
  res[j] = NULL;
}

char	**ft_split(const char *str, char c)
{
	char	**res;

	size_t(i), (j), (len);
	res = malloc(sizeof(char *) * (count_word(str, c) + 1));
	if (!res)
		return (NULL);

  creating_words();

	return (res);
}
