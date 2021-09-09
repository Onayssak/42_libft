#include <string.h>

void *ft_memcpy(void *dest, const void *ori, size_t b)
{
	size_t i;
	char *d;
	char *o;

	d = (char *) dest;
	o = (char *) ori;

	i = 0;
	while (i < b)
	{
		d[i] = o[i];
		i++;
	}
	return (dest);
}
