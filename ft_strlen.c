/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:20:40 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/07 17:00:18 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
 size_t ft_strlen(const char *s)
{
	size_t i;

	i=0;
	while (s[i])
		i++;
	return (i);
}
int main()
{
	int a;
	char str[] = "kawtar";
	a= ft_strlen(str);
	printf("%d",a);
}
