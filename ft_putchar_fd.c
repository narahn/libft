/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 03:47:11 by fahosni           #+#    #+#             */
/*   Updated: 2024/11/11 07:14:52 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
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
//     ft_putchar_fd ('3', fd);
//     fd = open("newfile", O_APPEND | O_RDWR, 0777);
//     printf("%d", fd);
//     ft_putchar_fd('m', fd);
//     close(fd);
// }