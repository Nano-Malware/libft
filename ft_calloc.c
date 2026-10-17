#include "libft.h"

void *ft_calloc(size_t n, size_t size)
{
  void *res;

  if (n == 0 || size == 0){
    res = malloc(1);
    if (!res)
      return (NULL);
    return (res);
  }
  if (n > SIZE_MAX / size)
    return (NULL);
  res = malloc(size * n);
  if (!res)
    return (NULL);
  ft_bzero(res, n * size);
  return(res);
}
