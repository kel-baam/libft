#include "libft.h"
 int ft_isalpha(int c)
{
	int i;

	i=0;
	if ((c >= 'a' && c <= 'z') || (c>='A' && c<= 'Z'))
		return (1);
	return (0);
}
 
			#include "libft.h"
 int ft_isalpha(int c)
{
	int i;

	i=0;
	if ((c >= 'a' && c <= 'z') || (c>='A' && c<= 'Z'))
		return (1);
	return (0);
}
 
int main()
{
    printf("%d",ft_isalpha('k'));
}			