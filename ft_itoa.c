/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourjal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:53:57 by rbourjal          #+#    #+#             */
/*   Updated: 2026/10/21 14:54:05 by rbourjal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	count_check_sign(long *nb, size_t *len)
{
	long	n;

	if ((*nb) < 0)
	{
		(*nb) *= -1;
		(*len) = 1;
	}
	if ((*nb) == 0)
	{
		(*len) = 1;
		return ;
	}
	n = *nb;
	while (n > 0)
	{
		n /= 10;
		(*len)++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	nb;

	len = 0;
	nb = n;
	count_check_sign(&nb, &len);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	while (len > (n < 0))
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
