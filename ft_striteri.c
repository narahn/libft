/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahosni <fahosni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 04:47:38 by narah             #+#    #+#             */
/*   Updated: 2024/11/12 18:25:54 by fahosni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// static void ft(unsigned int i, char *c)
// {
//     if (i % 2 == 0)
//         *c = ft_toupper(*c);
// }
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
