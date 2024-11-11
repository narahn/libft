/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:55:07 by narah             #+#    #+#             */
/*   Updated: 2024/11/07 00:39:14 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t ft_strlen(const char *s)
// {
//     int i;

//     i = 0;
//     while (s[i] != '\0')
//         i++;
//     return (i);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	if (i > dstsize)
		return (dstsize + ft_strlen(src));
	while (src[j] != '\0' && (i + j) < dstsize - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

// int main ()
// {
//     char dst [7] = "coding";
//     const char *src = "123";
//     size_t result = strlcat (dst, src, 0);

//     printf ("%zu", result);
// }