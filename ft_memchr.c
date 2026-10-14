#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
  size_t i;
  const unsigned char *ptr_s;

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
