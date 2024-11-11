/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 07:22:50 by narah             #+#    #+#             */
/*   Updated: 2024/11/09 07:26:43 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

// int main ()
// {
//     int fd = open("newfile", O_CREAT | O_RDWR ,0777);
//     printf("%d\n", fd);
//     ft_putchar_fd ('H', fd);
//     ft_putchar_fd ('E', fd);
//     ft_putchar_fd  ('L', fd);
//     ft_putchar_fd ('L', fd);
//     ft_putchar_fd ('o', fd);
//     fd = open("newfile", O_APPEND | O_RDWR, 0777);
//     ft_putstr_fd ("623849", fd);
//     fd = open("newfile", O_APPEND | O_RDWR, 0777);
//     printf("%d", fd);
//     ft_putchar_fd('m', fd);
//     close(fd);
// }