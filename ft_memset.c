/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:44:10 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/07 11:28:31 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void * ft_memset(void *b, int c, size_t len)
{
	size_t i;

    i=0;
	while(i < len)
    {
		((unsigned char*)b)[i] = (unsigned char)c;
        i++;
    }
    return (b);

}

