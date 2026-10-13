//#include "libft.h"
#include <stdio.h>

void *ft_bzero(void *d, size_t n)
{
  unsigned char *ptr;

  ptr = (unsigned char *)d;
  while (n-- > 0)
  {
    ptr[n] = 0;
  }
  return (d);
}


int main(void)
{

  char *str = "abcd";

  ft_bzero(str, 4);
  printf("%s", str);
}
