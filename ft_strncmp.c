/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:24:19 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/09 14:24:24 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;


    i=0;
    while((s1[i] || s2[i]) && i < n)
    
	{
        if ((unsigned char)s1[i] != (unsigned char)s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
 
// int main()
// {
//     char str1[]= "\200";
//     char str2[]="\0";
//     int c = (char)'\200';
//     int c2 = (char)'\0';

//     // printf("%d\n",ft_strncmp(str1,str2,1));
//     // printf("%d",strncmp(str1,str2,1));
//     printf("%d|%d\n", c, c2);
// }
