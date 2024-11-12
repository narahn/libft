/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahosni <fahosni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 03:10:33 by narah             #+#    #+#             */
/*   Updated: 2024/11/12 14:43:46 by fahosni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
//  int main ()
// {
//     t_list *node1 = ft_lstnew("coding");
//     t_list *node2 = ft_lstnew("school");
//     t_list *node3 = ft_lstnew("1337");
//     node1->next = node2;
//     node2->next = node3;
//     t_list *last_node = ft_lstlast(node1);
//     printf("%s",(char *)last_node->content);
// }