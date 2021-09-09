#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("Teste ft_memcmp\n");
	printf("%d\n", ft_memcmp("abcdef", "abcefg", 6));
	printf("%d\n", ft_memcmp("abcdef", "abcefg", 10));
	printf("%d\n", ft_memcmp("abcdef", "zbcefg", 6));
	printf("%d\n", ft_memcmp("abcdef", "abcefg", -6));
	printf("%d\n\n", ft_memcmp("abcdef", "abcefg", 0));
	printf("Teste memcmp\n");
	printf("%d\n", memcmp("abcdef", "abcefg", 6));
	printf("%d\n", memcmp("abcdef", "abcefg", 10));
	printf("%d\n", memcmp("abcdef", "zbcdef", 6));
	printf("%d\n", memcmp("abcdef", "abcefg", -6));
	printf("%d\n", memcmp("abcdef", "abcefg", 0));
	return (0);
}
