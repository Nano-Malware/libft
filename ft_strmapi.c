/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourjal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:48:57 by rbourjal          #+#    #+#             */
/*   Updated: 2026/10/22 22:03:26 by rbourjal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char test_callback(unsigned int i, char c)
{
    (void)i;
    return (ft_toupper(c));
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  size_t i;

  i = 0;
  char *res = malloc(ft_strlen(s) + 1);
  if (!res)
    return (NULL);

  while (s[i]){
    res[i] = f(i, (char)s[i]);
    i++;
  }
  res[i] = '\0';
  return res;
}

int main(void)
{
  char *res;
  res = ft_strmapi("hello", test_callback);

  printf("%s\n", res);
  free(res);
  return (0);
}
