/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:27:41 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/16 17:38:42 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	p = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}
// int main()
// {
//     char s1[]= "hellokk";
//     char s2[]="world";
//     printf("%s",ft_strjoin(s1+6,s1));
// }
