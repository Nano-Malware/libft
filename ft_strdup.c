#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	duplen;
	char	*res;
	int		i;

	duplen = ft_strlen(s);
	res = malloc(duplen + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
