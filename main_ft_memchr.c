#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("%s\n", memchr("abcdef", 'd', 6));
	printf("%s\n", ft_memchr("abcdef", 'd', 6));
	return (0);
}
