/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:37:51 by narah             #+#    #+#             */
/*   Updated: 2024/11/12 14:04:18 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		current = *lst;
		*lst = current->next;
		ft_lstdelone(current, del);
	}
}

// int main(void)
// {
//     t_list *node1 = ft_lstnew(strdup("cooding"));
//     t_list *node2 = ft_lstnew(strdup("school"));
//     t_list *node3 = ft_lstnew(strdup("1337"));
//     t_list *node4 = ft_lstnew(strdup("benguerir"));
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = node4;
//     t_list *current = node1;
//     while (current)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//     ft_lstclear(&node1, free);
//     if (node1 == NULL)
//     {
//         printf("\n");
//     }
//     return (0);
// }