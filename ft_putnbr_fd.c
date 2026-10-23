#include "libft.h"


static int count_digits(long n)
{
  int res;

  res = 1;
  while (n >= 10)
  {
      res *= 10;
    n /= 10;
  }
  return (res);
}

void ft_putnbr_fd(int n, int fd)
{
  long nb;
  int digits;
  char c;

  nb = n;
  if (nb < 0)
  {
    write(fd, "-", 1);
    nb *= -1;
  }

  digits = count_digits(nb);
  while (digits > 0)
  {
    nb / digits;
    nb % digits;
    write(1, )
    digits /= 10;
  }
}

int main(void)
{
  int fd = open("nano.txt", O_CREAT | O_RDWR | O_TRUNC, 0644);
  ft_putnbr_fd(1023, fd);
}
