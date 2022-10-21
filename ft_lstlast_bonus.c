/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-baam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:43:52 by kel-baam          #+#    #+#             */
/*   Updated: 2022/10/17 17:44:13 by kel-baam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
// int main()
// {
//    t_list *head = NULL;

//     for (int i = 0; i < 5; i++)
//     {
//         int *tmp = malloc(sizeof(int));
//         *tmp = i;
//         ft_lstadd_back(&head, ft_lstnew(tmp));
//     }

//     t_list *last = ft_lstlast(head);

//     printf("%d\n", *((int*)last->content));
//     return 0;
// }
