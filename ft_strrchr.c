/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:51:34 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/09 19:51:37 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
    int j;

    j=ft_strlen(s)-1;
    if((unsigned char)c=='\0')
     return (((char*)&s[j + 1]));
    while( j >=0)
    {
       if(s[j]== c)
        return(((char*)&s[j]));
        j--;
    
    }
    return 0;
}
// int main()
// {
//     char str[]="kwawtar\0";
//     printf("%s\n\n",ft_strrchr(str,'\0'));
//     printf("%s",strrchr(str,'\0'));
    
// }