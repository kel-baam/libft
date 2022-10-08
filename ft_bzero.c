/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:30:42 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/06 14:01:28 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char * s2 = (unsigned char*)s;
	i=0;
	while ( i < n)
	{
		s2[i] = 0;
	    i++;
	}
}

int main()
{
	char str[5] = "hello";

	ft_bzero (str,2);
	printf("%s", str);
}