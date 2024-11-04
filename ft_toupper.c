/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:33:23 by narah             #+#    #+#             */
/*   Updated: 2024/11/03 21:33:28 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return c-32;
    return c;
}

/*int main ()
{
    char c = 'f';

    printf ("%c", ft_toupper(c));

    return 0;
}*/