/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:16:25 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/10 09:32:32 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char * ft_strnstr(const char *str, const char *find, size_t len)
{
    size_t i;
    size_t j;
    i=0;
  
    if(str == NULL && !len)
    return NULL;
    while(str[i])
    {
        j=0;
        while(find[j] && str[i+j]==find[j] && i+j <len)
            j++;
        if (find[j]== '\0')
            return ((char *)(&str[i]));
        i++;
    }
    return 0;
}

// int main()
// {
//     char *str=NULL;
//     char *find= "HHH";
//     int size= 0;
//     printf("ft = |%s|\n",ft_strnstr(str,find,size));
//       printf("str = |%s|",strnstr(str,find,size));

// }
