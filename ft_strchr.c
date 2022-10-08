#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i])
    {
        if ((unsigned char)s[i] == (unsigned char)c)
            return (char*)(&s[i]);
        i++;
    }

    if ((unsigned char)c == '\0')
        return (char*)(&s[i]);
    return (NULL);
}


int main()
{
    char str[7] = "kaoutar";
    int c = 'o';

    printf("|%s|", strchr(str, c));
    return 0;
}