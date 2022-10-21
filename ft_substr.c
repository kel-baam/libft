/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:13:47 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/16 16:26:23 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*p;
	unsigned char	size;

	i = 0;
	if (!s)
		return (NULL);
	p = malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	size = len + start;
	if (start >= ft_strlen(s))
	{
		*p = 0;
		return (p);
	}
	while (s[i] && start < size)
	{
		p[i] = s[start++];
		i++;
	}
	p[i] = '\0';
	return (p);
}
// int main()
// {
//     char *str="kawtaruuuuuuuuu";
//     printf("%s",ft_substr(str,3,7)); 
// }
