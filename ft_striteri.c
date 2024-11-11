/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 04:47:38 by narah             #+#    #+#             */
/*   Updated: 2024/11/09 06:59:58 by narah            ###   ########.fr       */
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

// int main ()
// {
//     char *s = "codingschool";
//     ft_striteri(s, ft);
//     printf ("%s", s);
// }