/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 22:23:32 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/03/05 18:58:37 by mamagalh@st      ###   ########.fr       */
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


int run_test(char *cfd, char *cfd_exit)
{
	char	*str;
	int		count;
	int		fd;
	int		fd_exit;

	//atexit(find_leaks);
	fd = open(cfd, 2);
	fd_exit = open(cfd_exit, 2);
	count = 0;
	while (count <= 2147483646)
	{
		str = get_next_line(fd);
		if (str)
		{
			if (*str)
			{
				write(fd_exit, str, strlen(str));
				free(str);
			}
			else
			{
				write(1, cfd, 11);
				write(1, "    exit 2 NULL\n", 16);
				free(str);
				return (1);
			}
		}
		else
		{
			write(1, cfd, 11);
			write(1, "    exit 2 NULL\n", 16);
			system("leaks -q main.out");
			return (2);
		}
		count++;
	}
	free(str);
	return (0);
}

int	main(void)
{
	//atexit(find_leaks);
	run_test("files/file0.txt" , "files/file0_exit.txt");
	run_test("files/file1.txt" , "files/file1_exit.txt");
	run_test("files/file2.txt" , "files/file2_exit.txt");
	run_test("files/file3.txt" , "files/file3_exit.txt");
	run_test("files/file4.txt" , "files/file4_exit.txt");
	run_test("files/file5.txt" , "files/file5_exit.txt");
	run_test("files/file6.txt" , "files/file6_exit.txt");
	run_test("files/file7.txt" , "files/file7_exit.txt");
	run_test("files/file8.txt" , "files/file8_exit.txt");
	return (0);
}
