/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 22:01:38 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/25 22:01:41 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#define BUF_SIZE 4096
#define EACCES_MSG ": Permission denied\n"
#define ENOENT_MSG ": No such file or directory\n"
#define EISDIR_MSG ": Is a directory\n"
#define EBADF_MSG ": Bad file number\n"
#define EAGAIN_MSG ": Resource temporarily unavailable\n"
#define EINTR_MSG ": Interrupted function call\n"
#define EIO_MSG ": Input/output error\n"
#define EINVAL_MSG ": Invalid argument\n"
#define SNS(s) (s),(sizeof(s) - 1)

unsigned int	ft_strlen(char *str)
{
	char *last;

	last = str;
	while (*last)
		++last;
	return (last - str);
}

void			ft_error(char *file_name)
{
	write(2, SNS("cat: "));
	write(2, file_name, ft_strlen(file_name));
	if (errno == EACCES)
		write(2, SNS(EACCES_MSG));
	else if (errno == ENOENT)
		write(2, SNS(ENOENT_MSG));
	else if (errno == EISDIR)
		write(2, SNS(EISDIR_MSG));
	else if (errno == EBADF)
		write(2, SNS(EBADF_MSG));
	else if (errno == EAGAIN)
		write(2, SNS(EAGAIN_MSG));
	else if (errno == EINTR)
		write(2, SNS(EINTR_MSG));
	else if (errno == EIO)
		write(2, SNS(EIO_MSG));
	else if (errno == EINVAL)
		write(2, SNS(EINVAL_MSG));
	else
		write(2, SNS(": Unknown error\n"));
}

int				ft_cat(int fd)
{
	char	buff[BUF_SIZE];
	int		ret;

	if (fd == -1)
		return (fd);
	if ((ret = read(fd, buff, BUF_SIZE)) != 0 && ret != -1)
		if (write(1, buff, (unsigned)ret) == -1)
			return (1);
	if (ret == -1)
		return (1);
	if (fd != 0)
		close(fd);
	return (0);
}

int				main(int argc, char **argv)
{
	int		i;

	if (argc < 2)
		return (ft_cat(0));
	i = 1;
	while (i < argc)
	{
		if (ft_cat(open(argv[i], O_RDONLY)) != 0)
			ft_error(argv[i]);
		i++;
	}
	return (0);
}
