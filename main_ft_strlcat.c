#include <stdio.h>
#include <bsd/string.h>

size_t ft_strlcat(char *dest, char *ori, size_t b);

int main(void)
{
	int m;
	char dest[] = "Hello";
	char dest1[] = "Hello";

	m = ft_strlcat(dest, "World", 6);
	printf("%d\n", m);
	printf("%s\n", dest);

	m = strlcat(dest1, "World", 6);
	printf("%d\n", m);
	printf("%s\n", dest1);

	return (0);
}
