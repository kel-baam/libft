/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:29:52 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/16 17:26:51 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*allocation;
	int				len_s;

	i = 0;
	if (!s || !f)
		return (0);
	len_s = ft_strlen(s);
	allocation = (char *)malloc((len_s + 1) * sizeof(char));
	if (!allocation)
		return (NULL);
	while (s[i])
	{
		allocation[i] = (*f)(i, s[i]);
		i++;
	}
	allocation[i] = '\0';
	return (allocation);
}
// int main()
// { 
//     char s[]="KDFGytt";
//     printf("%s",ft_strmapi(s,ft_tolower));
// }
