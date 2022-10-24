/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:17:52 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/23 23:02:19 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is_exist(char const *str, char const c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		start;
	int		i;
	char	*returned_str;
	int		len;

	i = 0;
	start = 0;
	if (!s1 || !set)
		return (0);
	end = ft_strlen(s1) - 1;
	while (s1[start] && is_exist(set, s1[start]))
		start++;
	while (end >= start && is_exist(set, s1[end]))
		end--;
	len = end - start + 1;
	returned_str = (char *)malloc((len + 1) * sizeof(char));
	if (!returned_str)
		return (NULL);
	while (i < len)
		returned_str[i++] = s1[start++];
	returned_str[i] = '\0';
	return (returned_str);
}
