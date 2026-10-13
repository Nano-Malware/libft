#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
  unsigned char *ptr_dst;
  const unsigned char *ptr_src;


  size_t i;
  ptr_dst = (unsigned char *)dst;
  ptr_src = (const unsigned char *)src;
  if (ptr_dst > ptr_src)
  {
    i = n;
    while (i > 0)
    {
      i--;
      ptr_dst[i] = ptr_src[i];
    }
  }
  else
  {
    i = 0;
    while (i < n)
    {
      ptr_dst[i] = ptr_src[i];
      i++;
    }
  }
  return (ptr_dst);
}
