#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

size_t ft_strlcpy(char *dest, char *ori, size_t destsize);

int main(void)
{
	char ori[] = "Hello";
	char dest[] = "World";

	ft_strlcpy(dest, ori, 3);
	printf("%s\n", dest);

	return (0);
}
