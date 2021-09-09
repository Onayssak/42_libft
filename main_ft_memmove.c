#include <stdio.h>

void *ft_memmove(void *dest, const void *ori, size_t b);

int main(void)
{
	char dest[] = "Hello";
	char ori[] = "World";

	ft_memmove(dest, ori, -1);
	printf("%s\n", dest);

	return (0);
}
