#include <stdio.h>
#include <stddef.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t b);

int main(void)
{
	int i;
	char str[] = "Hello World";

	printf("%s\n", str);

	ft_memset(str, '0', 3);
	i = 0;
	while (i < 11)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");

	memset(str, '0', 3);
	i = 0;
	while (i < 11)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");

	return (0);
}