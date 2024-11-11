/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:44:36 by narah             #+#    #+#             */
/*   Updated: 2024/11/10 22:06:23 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new_node;
    
    new_node = malloc(sizeof(t_list));
    if (new_node == NULL)
        return NULL;
    new_node->content = content;
    new_node->next = NULL;
    return new_node;
}

// int main ()
// {
//     t_list *node;
//     node = ft_lstnew("codingschool");
//     printf ("%s", (char *)node->content); 
// }