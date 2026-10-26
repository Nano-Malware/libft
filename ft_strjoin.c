/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourjal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:56:44 by rbourjal          #+#    #+#             */
/*   Updated: 2026/10/26 14:56:44 by rbourjal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	char	*dst;
	size_t	s1_len;
	size_t	s2_len;

	if ((!s1 || !s2))
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s2_len == SIZE_MAX || s1_len > SIZE_MAX - s2_len - 1)
		return (NULL);
	res = malloc(s1_len + s2_len + 1);
	if (!res)
		return (NULL);
	dst = res;
	while (*s1)
		*dst++ = *s1++;
	while (*s2)
		*dst++ = *s2++;
	*dst = '\0';
	return (res);
}
