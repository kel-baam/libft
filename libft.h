#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
void * ft_memset(void *b, int c, size_t len);
void *ft_memchr(const void *str, int c, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void ft_bzero(void *s, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
char * ft_strnstr(const char *str, const char *find, size_t len);
void *ft_calloc(size_t count, size_t size);
int ft_strncmp(const char *s1, const char *s2, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char	*ft_strdup(char *src);
size_t ft_strlen(const char *s);
int ft_atoi(const char *str);
int ft_isalpha(int c);
int ft_isalnum (int n);
int ft_isascii(int c);
int ft_isdigit(int n);
int ft_isprint(int n);
int ft_tolower (int c);
int toupper(int c);
#endif
