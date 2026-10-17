#include "libft.h"


static int count_word(char *str, int c)
{
  size_t words;

  words = 0;
  while (*str)
  {
    while (*str == c)
      str++;
    if (*str)
    {
      words++;
      while (*str && *str != c)
        str++;
    }
  }
  return (words);
}

static size_t word_len(const char *str, size_t c)
{
  size_t i;

  i = 0;
  while (str[i] && str[i] != c)
    i++;

  return (i);
}

char **ft_split(const char *str, )
