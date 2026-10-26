/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourjal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 02:08:29 by rbourjal          #+#    #+#             */
/*   Updated: 2026/10/26 17:59:08 by rbourjal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
  char *last;

  last = NULL;
  while (*s)
  {
    if (*s == (char)c)
      last = (char *)s;
    s++;
  }
  if ((char)c == '\0')
    return ((char *)s);
  return (last);
}
