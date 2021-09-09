#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *ori, size_t b);

int main(void)
{
	char dest[] = "Hello";
	char ori[] = "World";

	ft_memcpy(dest, ori, 1);
	printf("%s\n", dest);

	memcpy(dest, ori, 1);
	printf("%s\n", dest);

	return (0);
}
