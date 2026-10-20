/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourjal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:39:55 by rbourjal          #+#    #+#             */
/*   Updated: 2026/10/20 21:11:43 by rbourjal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  char *allocat_num(int n, char *res)
{
  long i;

  i = n;
  int sign = (n < 0);
  if (sign)
    i *= i;
  while (n > 0)
  {
    i++;
    n /= 10;
  }
  res = malloc(i + 1 + sign);
  if (!res)
    return (NULL);

  return (res);
}

char *ft_itoa(int n)
{
  char  *res;
  int i;

  res = allocat_num(n, res);

  while (n > 0)
  {
    res[i] = n % 10;
    i++;
  }
  res[i] = '\0';

  return (res);
}

int main(void)
{

  printf("%s",ft_itoa(21231));
  return (0);
}
