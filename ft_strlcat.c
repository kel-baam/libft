/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:50:45 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/21 13:15:03 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendst;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	lendst = ft_strlen(dst);
	if (size <= lendst)
		return (ft_strlen(src) + size);
	while (src[i] && i < size - lendst - 1)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + ft_strlen(src));
}
// int main()
// {
//     char dst[30]="ll";
//     char src[]="baamran";
//     //printf("%lu",strlcat(dst,src,20));
//     printf("%zu\n",ft_strlcat(dst,NULL,20));
//     printf("%s",dst);

// } 
