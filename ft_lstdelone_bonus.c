/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahosni <fahosni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:22:35 by narah             #+#    #+#             */
/*   Updated: 2024/11/12 14:37:49 by fahosni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	if (del != NULL)
		del(lst->content);
	free(lst);
}
// int main ()
// {
//     t_list *node = ft_lstnew(strdup("coodingschool"));
//     printf("%s\n", (char *)node->content);
//     ft_lstdelone(node, free);
// }