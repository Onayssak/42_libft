#include <stdio.h>

size_t ft_strlen(const char *s);

int main(void)
{
	char *s;
	s = "Hello World";

	int q;
	q = ft_strlen(s);

	printf("%s tem %d bytes", s, q);
	return (0);
}
