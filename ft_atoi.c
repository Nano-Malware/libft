/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourjal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:56:43 by rbourjal          #+#    #+#             */
/*   Updated: 2026/10/26 18:34:18 by rbourjal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	long long	res;
	int	i;
	int	sign;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

static int	ft_atoi_negative(const char *str)
{
	int	res;
	int	i;
	int	sign;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 - (str[i] - '0');
		i++;
	}
	if (sign == 1)
		return (-res);
	return (res);
}

int	main(void)
{
	const char	*tests[] = {
		"0", "42", "-42", "+42", "   -42",
		"123abc", "abc123", "", "+", "-",
		"2147483647", "-2147483648"
	};
	size_t		i;
	int			a;
	int			b;
	int			real;

	i = 0;
	while (i < sizeof(tests) / sizeof(tests[0]))
	{
		a = ft_atoi(tests[i]);
		b = ft_atoi_negative(tests[i]);
		real = atoi(tests[i]);
		printf("Input: [%s]\n", tests[i]);
		printf("Option 1: %d | Option 2: %d | atoi: %d\n",
			a, b, real);
		if (a == real && b == real)
			printf("Result: OK\n\n");
		else
			printf("Result: DIFFERENT\n\n");
		i++;
	}
	return (0);
}
