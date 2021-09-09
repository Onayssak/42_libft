#include <stdlib.h>

void *ft_memcpy(void *dest, const void *ori, size_t b);

void *ft_memmove(void *dest, const void *ori, size_t b)
{
	char *tmp;

	tmp = (char *)malloc(sizeof(char) * b);
	if (tmp == NULL)
		return (NULL);
	
	ft_memcpy(tmp, ori, b);
	ft_memcpy(dest, tmp, b);
	free(tmp);

	return (dest);
}
