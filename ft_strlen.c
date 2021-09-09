#include <string.h>

size_t ft_strlen(const char *s)
{
	int b;
	b = 0;

	while(s[b] != '\0')
	{
		b++;
	}
	return (b);
}
