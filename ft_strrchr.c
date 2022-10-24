/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:51:34 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/24 17:10:27 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	j;

	j = ft_strlen(s) - 1;
	if ((unsigned char)c == '\0')
		return (((char *)&s[j + 1]));
	while (j >= 0)
	{
		if ((unsigned char)s[j] == (unsigned char)c)
			return (((char *)&s[j]));
		j--;
	}
	return (0);
}
