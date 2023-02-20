/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:40:18 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/20 22:45:51 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_str(void **line, void *break_point)
{
	char		*str_to_return;
	ssize_t		str_len;

	str_len = 0;
	if (break_point)
		str_len = (ssize_t)((char *)break_point - *((char **)line));
	else
		str_len = ft_strlen(*line);
	str_to_return = ft_calloc(str_len + 2, sizeof(char));
	ft_memcpy(str_to_return, *line, str_len + 1);
	*line = &(*line)[str_len + 1];
	return (str_to_return);
}

ssize_t	keep_reading(int fd, void **line)
{
	char	*buffer1;
	char	*buffer2;
	ssize_t	red;
	ssize_t	len;

	len = 0;

	if (*line)
		len = ft_strlen(*line);
	buffer1 = (char *) ft_calloc(len + 1, sizeof(char));
	ft_memcpy(buffer1, *line, len + 1);
	buffer2 = (char *) ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	red = read(fd, buffer2, BUFFER_SIZE);
	*line = ft_strjoin(buffer1, buffer2);
	return (red);
}

char	*get_next_line(int fd)
{
	static void	*line;
	void		*break_point;
	char		*str_to_return;
	ssize_t		last;

	last = 0;
	if (!line)
	{
		line = (char *)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
		read(fd, line, BUFFER_SIZE);
	}
	break_point = ft_memchr(line, '\n', ft_strlen(line));
	while (!(break_point || last))
	{
		if (keep_reading(fd, &(line)) < BUFFER_SIZE)
			last = 1;
		break_point = ft_memchr(line, '\n', ft_strlen(line));
	}
	str_to_return = get_str(&line, break_point);
	return (str_to_return);
}
