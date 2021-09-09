#include <stdio.h>
#include "libft.h"

int main(void)
{
	int *i;
	int *j;

	j = calloc(0, sizeof(int));
	printf("%i\n", *j);

	i = ft_calloc(0, sizeof(int));
	printf("%i\n", *i);

	free(i);
	free(j);

	return (0);
}
