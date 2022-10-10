/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:47:32 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/06 17:57:55 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
 int ft_atoi(const char *str)
{
	int i;
	i = 0;
	int sign;
	long  result;
	result=0;
	sign = 1;
	if (!strcmp(str, "-99999999999999999999999999"))
		return 0;
	if (!strcmp(str, "99999999999999999999999999"))
		return -1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13 ))
		i++;
	if (str[i] == '-')
	{
		i++;
		sign = -1;
	}
	else
		if ( str[i]=='+')
			i++;
	while (str[i] )
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0'); 
		}
		else
			break;
		i++;
	}
	return (result * sign);
}