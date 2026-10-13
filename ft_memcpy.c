#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
  const unsigned char *ptr_dst;
  unsigned char *ptr_src;
  size_t i;

  i = 0;
  ptr_dst = (const unsigned char *)dst;
  ptr_src = (unsigned char *)src;
  while (i < n)
  {
    ptr_dst[i] = ptr_src[i];
    i++;
  }

  return (dst);
}
