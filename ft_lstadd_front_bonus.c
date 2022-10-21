/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:30:03 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/17 17:32:36 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			new->next = *lst;
			*lst = new;
		}
	}
}
// int main()
// {
// t_list *head = NULL;

// t_list *newlst = ft_lstnew("hello");
// t_list *newlsth = ft_lstnew("hell");
// ft_lstadd_front(&head,newlsth);
// printf("%s",(char*)head ->content);
// }
