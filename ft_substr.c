/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourjal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:56:44 by rbourjal          #+#    #+#             */
/*   Updated: 2026/10/26 14:56:44 by rbourjal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	tocpy;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	tocpy = ft_strlen(s) - start;
	if (len < tocpy)
		tocpy = len;
	res = malloc(tocpy + 1);
	if (!res)
		return (NULL);
	ft_bzero(res, tocpy + 1);
	while (tocpy--)
		res[tocpy] = s[start + tocpy];
	return (res);
}
