/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:08:02 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/07 18:09:00 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i=0;
	if (((unsigned char*)s1)[i] == ((unsigned char*)s2)[i] && i < n)
	i++;
	return (((unsigned char*)s1)[i]-((unsigned char*)s2)[i]);
}
