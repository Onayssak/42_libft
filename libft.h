#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int ft_atoi(const char *nptr);
void ft_bzero(void *s, size_t b);
void *ft_calloc(size_t nmemb, size_t size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dest, const void *ori, size_t b);
void *ft_memmove(void *dest, const void *ori, size_t b);
void *ft_memset(void *s, int c, size_t b);
char *ft_strchr(const char *s, int c);
char *ft_strdup(const char *s);
size_t ft_strlcat(char *dest, const char *ori, size_t b);
size_t ft_strlcpy(char *dest, char *ori, size_t destsize);
size_t ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strrchr(const char *s, int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(int c);
int ft_toupper(int c);

#endif