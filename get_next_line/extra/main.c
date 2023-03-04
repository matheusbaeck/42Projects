/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 22:23:32 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/03/04 04:02:07 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "get_next_line.h"

void	find_leaks(void)
{
	system("leaks -q main.out");
}


int run_test(int fd, int fd_exit)
{
	char	*str;
	int		count;

	count = 0;
	while (count >= 0)
	{
		str = get_next_line(fd);
		if (*str)
		{
			write(fd_exit, str, strlen(str));
			free(str);
		}
		else
		{
			write(fd_exit, "NULL\n", 5);
			write(fd_exit, "numero", 12);
			free(str);
			break;
		}
		count++;
	}
	return (0);
}

int	main(void)
{
	int		fd;
	int		fd_exit;

	atexit(find_leaks);
	fd = open("files/src/file.txt", 2);
	fd_exit = open("files/src/file.txt", 2);
	run_test(fd , fd_exit);
	return (0);
}
