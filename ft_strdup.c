/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:27:38 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/10 23:39:17 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = ft_strlen(src);
	ptr = malloc(sizeof(char) * (j + 1));
	if (ptr == NULL)
		return (0);
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
