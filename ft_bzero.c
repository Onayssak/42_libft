#include <string.h>
#include "libft.h"

void *ft_memset(void *s, int c, size_t b);

void ft_bzero(void *s, size_t b)
{
	ft_memset(s, 0, b);
}