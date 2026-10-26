/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourjal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 20:02:09 by rbourjal          #+#    #+#             */
/*   Updated: 2026/10/23 20:02:12 by rbourjal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long n)
{
	int	res;

	res = 1;
	while (n >= 10)
	{
		res *= 10;
		n /= 10;
	}
	return (res);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	int		digits;
	char	c;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	digits = count_digits(nb);
	while (digits > 0)
	{
		c = '0' + (nb / digits);
		write(fd, &c, 1);
		nb = nb % digits;
		digits /= 10;
	}
}
