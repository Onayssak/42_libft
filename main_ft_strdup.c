#include <stdio.h>
#include "libft.h"

int main(void)
{
	char str[] = "Teste";

	ft_strdup(str);
	printf("%s\n\n", str);

	strdup(str);
	printf("%s\n", str);

	return (0);
}
