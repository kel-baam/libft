/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:33:05 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/10 22:55:49 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (0);
	while (i < count * size)
	{
		((char *)ptr)[i] = '\0';
		i++;
	}
	return (ptr);
}
