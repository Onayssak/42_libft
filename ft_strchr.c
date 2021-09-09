#include <string.h>
#include <stddef.h>

char *ft_strchr(const char *s, int c)
{
    unsigned i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return ((char*)&s[i]);
        i++;
    }
    if (s[i] == c)
        return ((char*)&s[i]);
    return (NULL);
}
