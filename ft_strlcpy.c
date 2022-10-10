/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:21:11 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/10 21:21:18 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{

    size_t i;
    size_t j;
    j = strlen(src);
    i=0;
    if(size != 0)
    {
        while( src[i] && i < size - 1)
        {
            dst[i]= src[i];
            i++;
        }
        dst[i]= '\0';
    }
    return j;
    
 }
//  int main()
//   {
//     char str[]= "";
//     char dst[]= "ttt";
//     printf("%lu\n",ft_strlcpy(dst,str,1));
//     //printf("%lu\n",strlcpy(dst,str,1));
//      printf("%s",dst);
// }
