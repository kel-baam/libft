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

int	convert_to_int(const char *str, int i)
{
	int	result;

	result = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
		}
		else
			break ;
		i++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		res;

	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		i++;
		sign = -1;
	}
	else if (str[i] == '+')
			i++;
	res = convert_to_int(str, i);
	return (res * sign);
}
//int main()
//{
	//printf("%d",atoi("42949672952222123123 "));

//printf("%d\n",ft_atoi("42949672952222123123"));
//printf("%d\n",atoi("18446744073709551617"));

//max long long
//}