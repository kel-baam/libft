/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iatoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 22:55:16 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/16 23:25:41 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	number_len(int a)
{
	int	len;

	len = 0;
	if (!a)
		return (1);
	while (a)
	{
		a = a / 10;
		len++;
	}
	return (len);
}

char	*convert_to_string(int n, unsigned int tmp, int len)
{
	char	*string;

	string = (char *)malloc((len + 1) * sizeof(char));
	if (!string)
		return (NULL);
	string[len] = '\0';
	len--;
	while (len >= 0)
	{
		string[len] = tmp % 10 + '0';
		tmp = tmp / 10;
		len--;
	}
	if (n < 0)
		string[0] = '-';
	return (string);
}

char	*ft_itoa(int n)
{
	char			*a;
	int				len;
	unsigned int	tmp;

	len = number_len(n);
	if (n < 0)
	{
		tmp = n * -1;
		len++;
	}
	else
		tmp = n;
	a = convert_to_string (n, tmp, len);
	return (a);
}
//  int main()
// {
//    int  number = 100;
//     printf("%s\n", ft_itoa(number));
//         return 0;
//  }
