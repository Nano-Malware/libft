/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourjal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 02:18:47 by rbourjal          #+#    #+#             */
/*   Updated: 2026/10/22 02:20:25 by rbourjal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr_s;

	i = 0;
	ptr_s = (const unsigned char *)s;
	while (i < n)
	{
		if (ptr_s[i] == (unsigned char)c)
			return ((void *)(ptr_s + i));
		i++;
	}
	return (NULL);
}
