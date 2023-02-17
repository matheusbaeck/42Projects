/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:40:18 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/17 11:49:40 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 -L/Users/mamagalh/42Projects/libft/proj/ -lft get_next_line.c
#include "/Users/mamagalh/42Projects/#header/libft.h"
#include "limits.h"
#include <stdio.h>
#include <fcntl.h>


int	ft_isbreackline(void *cursor)
{
	ssize_t	index;
	void	*temp;

	index = 0;
	while (((int *)cursor)[index])
	{
		if (((int *)cursor)[index] == '\n')
		{
			temp = &cursor[index];
			free(cursor);
			cursor = temp;
			free(temp);
			return (index);
		}
		index++;
	}
	return (0);
}

int	ft_readone(int fd, void *cursor)
{
	char	*buffer1;
	char	*buffer2;

	buffer1 = (char *) ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	ft_memcpy(buffer1, cursor, BUFFER_SIZE);
	buffer2 = (char *) ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	read(fd, buffer2, BUFFER_SIZE);
	cursor = ft_strdup(ft_strjoin(buffer1, buffer2));
	return (1);
}

char	*get_next_line(int fd)
{
	static void	*cursor;
	void		*temp;
	int			index;

	if (cursor != 0)
	{
		cursor = (char *) ft_calloc(BUFFER_SIZE + 1, sizeof(char));
		read(fd, cursor, BUFFER_SIZE);
	}
	index = ft_isbreackline(cursor);
	if (index != 0)
	{
		temp = cursor;
		free(cursor);
		cursor = &temp[index];
		free(temp);
		return (cursor);
	}
	else
	{
		ft_readone(fd, cursor);
	}
	return (cursor);
}

int	main(void)
{
	int	fd;
	char	*str;
	fd = open("file.txt", 2);
	str = get_next_line(fd);
	printf("%s\n", str);
	str = get_next_line(fd);
	printf("%s\n", str);
	str = get_next_line(fd);
	printf("%s\n", str);
	// while (str)
	// {
	// 	str = get_next_line(fd);
	// 	printf("%s\n", str);
	// }
	return (0);
}
