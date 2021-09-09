#include "libft.h"
#include <stdio.h>

int main(void)
{
	int i;
	char str[] = "Hello";

	ft_bzero(str, 1);

	i = 0;
	while (i < 5)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");

	return (0);
}
