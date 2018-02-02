/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 10:41:10 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/25 21:42:44 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
	{
		write(2, "File name missing.\n", sizeof("File name missing.\n"));
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", sizeof("Too many arguments.\n"));
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (1);
	ret = read(fd, buf, BUF_SIZE);
	if (ret == -1)
		return (1);
	write(1, buf, ret);
	close(fd);
	if (close(fd) == -1)
		return (1);
	return (0);
}
