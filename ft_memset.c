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

int main(void)
{
  // 2147483647
  //
  int i;
  int k = 1337;
  int j = 0;
  unsigned char *p;

  ft_memset(&i, 128, sizeof(int));
  printf("%d",i);

  return (0);
}
