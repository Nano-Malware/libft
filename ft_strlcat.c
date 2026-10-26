/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourjal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:56:44 by rbourjal          #+#    #+#             */
/*   Updated: 2026/10/26 17:40:04 by rbourjal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	j;

	src_len = ft_strlen(src);

  dst_len = 0;
  while (dst_len < size && dst[dst_len])
      dst_len++;
  src_len = ft_strlen(src);
  if (dst_len == size)
      return (size + src_len);
	j = 0;
	while (dst_len + j < size - 1 && src[j])
	{
		dst[dst_len + j] = src[j];
		j++;
	}
	dst[dst_len + j] = '\0';
	return (dst_len + src_len);
}
