/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:18:00 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/16 16:33:25 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
		write(fd, "-2147483648", 11);
	else if (nb < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd((-1 * nb), fd);
	}
	else if (nb >= 0 && nb <= 9)
	{
		nb = nb +48;
		write(fd, &nb, 1);
	}
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}
// int main()
// {
//     int str=123456;
//     int fd =open("tst.txt",O_WRONLY);
//     ft_putnbr_fd(str,fd);
// }
