int main(void)
{
	char const s[] = "Hello World";
	char c = ' ';
	int i;
	char **res;

	i = 0;
	res = ft_split(s, c);

	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}

	return (0);
}
