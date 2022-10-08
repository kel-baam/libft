#ifndef LIBFT_H
#define LIBFT_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
void * ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
char *ft_strchr(const char *s, int c);
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
