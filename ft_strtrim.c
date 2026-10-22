#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	is_in_set(const char *set, char c)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;
	int		i;

	i = 0;
	while (s1[i] && is_in_set(set, s1[i]))
		i++;
	start = i;
	end = 0;
	while (s1[end])
		end++;
	while (start < end && is_in_set(set, s1[end - 1]))
		end--;
	res = malloc(end - start + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (start < end)
	{
		res[i] = s1[start];
		start++;
		i++;
	}
	res[i] = '\0';
	return (res);
}

// int	main(void)
// {
// 	char	*result;
//
// 	result = ft_strtrim("xyzhello", "xaz");
// 	printf("Result: %s\n", result);
// 	free(result);
// 	return (0);
// }
