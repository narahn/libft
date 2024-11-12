/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:53:08 by narah             #+#    #+#             */
/*   Updated: 2024/11/12 14:10:30 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *node;
    
    node = lst;
    if (lst == NULL || f == NULL)
        return;
    
    while (node != NULL && f != NULL)
    {
            f(node->content);
            node = node->next;
    }
}