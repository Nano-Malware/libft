/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourjal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:48:57 by rbourjal          #+#    #+#             */
/*   Updated: 2026/10/23 00:15:05 by rbourjal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char)) // read more about how the pointer to a function work and how it pointes in memmory
{
	size_t	i;
	char	*res;

	if (!s || !f) // what is the test that testes this
		return (NULL);
	res = malloc(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f((unsigned int)i, s[i]); // if the system is 64bit and i is holding the max of the size what happens to the value of it.
		i++;
	}
	res[i] = '\0';
	return (res);
}
