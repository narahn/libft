/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:01:57 by narah             #+#    #+#             */
/*   Updated: 2024/11/12 14:24:33 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *new_node;

    if (lst == NULL || f == NULL || del == NULL)
        return NULL;

    new_list = NULL;
    while (lst != NULL)
    {
        new_node = ft_lstnew(f(lst->content));
        if (new_node == NULL)
        {
            ft_lstclear(&new_list, del);
            return NULL;
        }
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;
    }
    return new_list;
}
