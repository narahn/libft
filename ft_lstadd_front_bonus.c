/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 22:07:43 by narah             #+#    #+#             */
/*   Updated: 2024/11/11 02:38:18 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main ()
// {
//     t_list *node = NULL;
//     t_list *node1 = ft_lstnew("coding");
//     ft_lstadd_front(&node1, node);
//     ft_lstadd_front(&node1, node);
//     t_list *result = node1;
//     while (result)
//     {
//     printf("%s", (char *)result->content);
//     result = result->next;
//     }
// }