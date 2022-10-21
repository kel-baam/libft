/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:30:04 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/17 17:50:03 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (src < dst)
	{
		while (len)
		{
			len--;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
		return (dst);
	}
	else
		ft_memcpy(dst, src, len);
	return (0);
}
//  int main()
//  {
//     char str[]="ayoub";
//     printf("|%s|\n",memmove(str,NULL ,3));
//     printf("%s",ft_memmove(str+2,str  ,3));
//  }
