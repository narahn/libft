/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 00:48:11 by narah             #+#    #+#             */
/*   Updated: 2024/11/11 02:53:26 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// int main ()
// {
//     t_list *node = NULL;
//     t_list *node1 = ft_lstnew("coding");
//     t_list *node2 = ft_lstnew("school");
//     t_list *node3 = ft_lstnew("1337");
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;
//     int size = ft_lstsize(node1);
//     printf("%d\n", size);
//     ft_lstadd_front(&node1, node);
//     ft_lstadd_front(&node1, node);
//     t_list *result = node1;
//     while (result)
//     {
//     printf("%s\n", (char *)result->content);
//     result = result->next;
//     }
// }