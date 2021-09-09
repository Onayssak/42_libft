#include <string.h>

void *ft_memset(void *s, int c, size_t b)
{
	char *str;

	str = (char *)s;

	while (b > 0)
	{
		str[b-1] = c;
		b--;
	}
	return (s);
}