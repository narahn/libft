/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahosni <fahosni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:55:31 by narah             #+#    #+#             */
/*   Updated: 2024/11/12 18:25:46 by fahosni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int	count;
	int	i;
	int	j;

	j = 0;
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && j == 0)
		{
			count++;
			j = 1;
		}
		if (s[i] == c)
			j = 0;
		i++;
	}
	return (count);
}

static void	*free_res(char **result)
{
	int	j;

	j = 0;
	while (result[j] != NULL)
	{
		free(result[j]);
		j++;
	}
	free(result);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	int			i;
	char		**result;
	const char	*start;

	i = 0;
	if (s == NULL)
		return (NULL);
	result = (char **)ft_calloc(count_word(s, c) + 1, sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s == '\0')
			break ;
		start = s;
		while (*s != '\0' && *s != c)
			s++;
		result[i++] = ft_substr(start, 0, s - start);
		if (result[i - 1] == NULL)
			return (free_res(result));
	}
	result[i] = NULL;
	return (result);
}
