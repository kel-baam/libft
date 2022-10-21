/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:50:30 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/10 23:31:05 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (0);
	while (i < n)
	{
		((unsigned char *)(dst))[i] = ((unsigned char *)(src))[i];
		i++;
	}
	return (dst);
}
// int main()
// {
// 	char str[]="hello";
// 	char dst[]="kkkooooooo";
// 	//printf("%s\n",ft_memcpy(dst,str,3));
// 	printf("%s",memcpy(dst,str,3));
// }