/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:22:05 by narah             #+#    #+#             */
/*   Updated: 2024/11/06 21:12:20 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char ft(unsigned int i, char c)
{
    if (i % 2 == 0)
        return ft_toupper(c);
    return (c);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int len;
    char *s1;
    unsigned int i;
    
    if (s == NULL || f == NULL)
        return NULL;
    len = ft_strlen(s);
    s1 = (char *)malloc(len + 1);
    if (s1 == NULL)
        return NULL;
    i = 0;
    while (i < len)
    {
        s1[i] = f(i, s[i]);
        i++;
    }
    s1[len] = '\0';
    return s1;
}

// int main()
// {
//     char *result;
//     char *s = "codingchool";
//     result = ft_strmapi(s, ft);
//     printf("%s", result);
// } 