#include <stdio.h>
#include "libft.h"

int main(void)
{
	char str[] = "Hello";

	printf("%p : %p\n", strchr(str, 'e'), ft_strchr(str, 'e'));
	printf("%p : %p\n", strchr(str, '\0'), ft_strchr(str, '\0'));
	printf("%p : %p\n", strchr(str, ' '), ft_strchr(str, ' '));

	return (0);
}
