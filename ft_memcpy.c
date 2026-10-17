#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
  unsigned char *ptr_dst;
  const unsigned char *ptr_src;
  size_t i;

  i = 0;
  ptr_dst = (unsigned char *)dst;
  ptr_src = (const unsigned char *)src;
  while (i < n)
  {
    ptr_dst[i] = ptr_src[i];
    i++;
  }

  return (dst);
}
