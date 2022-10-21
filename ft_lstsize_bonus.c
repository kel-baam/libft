/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:23:33 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/17 17:29:26 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
// int main()
// {
//     t_list *head = NULL;
//     for (int i = 0; i < 1000; i++)
//     {
//         char *tmp = "hello";
//         ft_lstadd_front(&head, ft_lstnew(tmp));
//     }
//     printf("%d\n", ft_lstsize(head));
//     return (0);
// }
