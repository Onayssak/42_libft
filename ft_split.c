#include "libft.h"

static int	ft_word(const char *s, char c)
{
	int	i;
	int	word;

	word = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c || s[i] == '\0')
			word++;
		i++;
	}
	word = word + 1;
	return (word);
}

static size_t	get_wordlen(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i++);
}

static char	*worddup(const char *s, size_t len)
{
	char	*str;
	size_t	i;

	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	*freeslip(char **tab, size_t stop)
{
	size_t	i;

	i = 0;
	while (i < stop)
	{
		free(tab[i]);
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	len;
	size_t	words;
	size_t	i;

	if (s == NULL)
		return (NULL);
	words = ft_word(s, c);
	tab = malloc((words + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < words)
	{
		len = get_wordlen(s, c);
		if (len)
		{
			tab[i] = worddup(s, len);
			if (tab[i++] == NULL)
				return (freeslip(tab, i - 1));
		}
		s = s + len + 1;
	}
	tab[i] = NULL;
	return (tab);
}
