/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:37:18 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/07 17:18:22 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	i = 0;
	if ( dst == src || n == 0 )
		return (dst);
	while(((unsigned char *)src)[i] && i < n )
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		i++;
	}
	((unsigned char*)dst)[i]='\0';
	return (dst);
}
