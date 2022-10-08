#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;


    i=0;
    if( (s1[i] || s2[i] ) && s1[i] == s2[i] && i < n)
        i++;
        return (s1[i]-s2[i]);


}
int main()
{
    char str1[]="hhhh";
    char str2[]="hhhddd";
    printf("%d\n",ft_strncmp(str1,str2,2));
    printf("%d",strncmp(str1,str2,2));

}