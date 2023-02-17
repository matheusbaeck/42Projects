/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 08:21:28 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/17 08:40:45 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	def_size_nextline(fd, buffer, buffer_size, index);
{
	char	*line;
	size_t	line_count;
	ssize_t	line_size;
	ssize_t	red;

	line = ft(ft_strdup(buffer));
	line_coun = 0;
	line_size = ft_strlen(buffer);
	while (!ft_memchr(line, '\n', buffer_size))
	{
		red = read(fd, buffer, buffer_size);
		line_count++;

	}
	

}

char	*get_next_line(int fd)
{
	void			*buffer;
	void			*buffer_next;
	void			**lines;
	static ssize_t	index;
	ssize_t			buffer_size;
	ssize_t			buffer_size_next;
	ssize_t			red;
	size_t			count;
	size_t			line;

	// search for the last printed point
	buffer_size = BUFFER_SIZE;
	index = 0;
	red = 0;
	buffer = malloc(buffer_size * sizeof(char));
	while (index <= red) //if red == 0 and EOF is an infinit loop
		red += read(fd, buffer, buffer_size);
	*buffer_next = buffer[index % buffer_size]; //starter index to read new
	// reach last printed point
	// define size off next line
	int	def_size_nextline(buffer, buffer_size, index, red)
	
	
	
	buffer_count = 0;
	buffer_next = malloc(buffer_size * sizeof(char));
	buffer_size_next = index % buffer_size;
	while (!ft_memchr(buffer_next, '\n', buffer_size)) // buffer size or (index - red) or (red % buffer_size)
	{
		buffer_size_next = read(fd, buffer, buffer_size);
		if (buffer_size_next < buffer_size)
			// reach EOF --> last line
			//set index && return
		buffer_count++;
	}
	// found size of next line
	// fill the pointer with a line
	count = 0;
	line = 0;
	lines = (char **)malloc(buffer_count * sizeof(char *));
	while (line <= count)
	{
		lines[line] = ft_strdup(buffer);

	}
	//ponter filled with a lline
	//set index && return
	return (NULL);
}

int	main(void)
{
	int	fd;
	char	*str;
	fd = open("file.txt", 2);
	str = get_next_line(fd);
	write(1, str, ft_strlen(str));
	return 0;
}