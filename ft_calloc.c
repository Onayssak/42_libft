#include <stdlib.h>

void *ft_memset(void *s, int c, size_t b);
void *ft_calloc(size_t nmemb, size_t size)
{
	size_t *memory;
	size_t total_by;
	int fill_by;

	total_by = nmemb * size;
	fill_by = 0;
	memory = malloc(total_by);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (total_by > 2147483647)
		return (NULL);

	ft_memset(memory, fill_by, total_by);
	return ((void *)memory);
}
