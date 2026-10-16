//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
int ft_atoi(const char *str)
{
  int res;
  int i;
  int sign;

  res = 0;
  sign = 1;
  i = 0;
  while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    i++;

  if (str[i] == '+' || str[i] == '-')
  {
    if (str[i] == '-')
      sign = -1;
    i++;
  }
  
  while (str[i] >= '0' && str[i] <= '9')
  {
    res = 10 * res + (str[i] - '0');
    i++;
  }

  return (res * sign);
}


int main(void)
{
  printf("%d\n", ft_atoi("   8585875876587651231231"));
  printf("%d\n", atoi("-2147483648"));
  printf("%d\n", ft_atoi("-2147483648"));
  printf("%d\n",ft_atoi("   -asd++--1231231"));
  printf("%d\n",ft_atoi("   -++--123asd1231"));

  return 0;
}
