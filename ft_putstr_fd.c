#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
  size_t i;

  i = 0;
  while (s[i])
  {
    write(fd, &s[i], 1);
    i++;
  }
}

int main(int argc, char *argv[])
{
  int fd = open("nano.txt", O_CREAT | O_RDWR | O_TRUNC, 0644);
  ft_putstr_fd("hi nn txt", fd);
  close(fd);
  return (0);
}
