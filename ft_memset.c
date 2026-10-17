#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
  unsigned char *res;
  size_t i;

  res = (unsigned char *)s;
  i = 0;
  while (i < n)
  {
    res[i] = (unsigned char)c;
    i++;
  }

  return (s);
}
