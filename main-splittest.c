#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c);
void	*__real_malloc(size_t n);

static int	g_calls;
static int	g_fail_at;

void	*__wrap_malloc(size_t n)
{
	g_calls++;
	if (g_calls == g_fail_at)
		return (NULL);
	return (__real_malloc(n));
}

int	main(void)
{
	char	**r;
	int		k;
	int		k_max;
	int		bad;

	g_fail_at = 0;
	g_calls = 0;
	r = ft_split("a b c d", ' ');
	k_max = g_calls;
	k = 0;
	while (r && r[k])
		free(r[k++]);
	free(r);
	bad = 0;
	k = 1;
	while (k <= k_max)
	{
		g_calls = 0;
		g_fail_at = k;
		r = ft_split("a b c d", ' ');
		if (r != NULL)
		{
			printf("malloc call #%d failed but ft_split returned non-NULL\n", k);
			bad++;
		}
		k++;
	}
	printf("%d malloc calls per split, %d failure points tested, %d wrong\n",
		k_max, k_max, bad);
	return (bad != 0);
}
