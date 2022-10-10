/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:23:43 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/09 14:23:47 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memchr(const void *str, int c, size_t n)
{
    size_t i;
    i=0;
    while(((unsigned char *)str)[i] && i < n)
    {
        if(((unsigned char *)str)[i] == ((unsigned char )c))
        return  (((unsigned char*)&str[i]));
        i++;

    }
    if ((unsigned char)c == '\0')
        return (unsigned char*)(&str[i]);
    return 0;
}
