/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 07:27:36 by narah             #+#    #+#             */
/*   Updated: 2024/11/09 08:01:14 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		 ft_putchar_fd(n + 48, fd);
}

// int main ()
// {
//     int fd = open("newfile", O_CREAT | O_RDWR ,0777);
//     printf("%d\n", fd);
//     ft_putchar_fd ('H', fd);
//     ft_putnbr_fd (-9, fd);
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