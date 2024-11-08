/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:55:46 by narah             #+#    #+#             */
/*   Updated: 2024/11/07 00:17:24 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    if (dst == NULL && src == NULL)
        return (NULL);
    if (dst < src)
        return ft_memcpy (dst, src, len); 
    while (len > 0)
        {
            --len;
            ((unsigned char *)dst)[len] = ((const unsigned char *)src)[len]; 
        }
    return (dst);
}

// int main ()
// {
//     char *result;
//     char s[18] = "codingschool";
//     result = memmove (s + 5, s, 9);
//     printf ("%s", result);
// }