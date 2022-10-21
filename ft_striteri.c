/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:53:51 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/16 15:57:33 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void f(unsigned int i, char *c)
// {     (void)i;
// *c = ft_tolower(*c);
// }
// int main()
// {   
// 	void *p;
//     char s[]="kawUUJKItar";
// 	p=&f;
// 	ft_striteri(s,(p));
// 	printf("%s",s);
// }
