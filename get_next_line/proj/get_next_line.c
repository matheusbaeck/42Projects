/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:40:18 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/24 07:08:22 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

char	*ft_calloc(size_t count, size_t size)
{
	char			*v;
	unsigned int	i;

	i = (count * size);
	v = malloc(count * size);
	if (v)
	{
		while (i--)
		{
			v[i] = '\0';
		}
		return (v);
	}
	return (0);
}

char	*get_str(void **line, void *break_point, ssize_t last)
{
	char		*str_to_return;
	ssize_t		str_len;
	int			a;

	if (break_point && !last)
	{
		str_len = (ssize_t)((char *)break_point - *((char **)line) + 1);
		str_to_return = ft_calloc(str_len + 1, sizeof(char));
		ft_memcpy(str_to_return, *line, str_len);
		a = ft_strlen(str_to_return);
		*line = &(*line)[str_len];
		return (str_to_return);
	}
	if (break_point && last)
	{
		str_len = (ssize_t)((char *)break_point - *((char **)line));
		str_to_return = ft_calloc(str_len + 2, sizeof(char));
		ft_memcpy(str_to_return, *line, str_len);
		a = ft_strlen(str_to_return);
		*line = &(*line)[str_len + 1];
		return (str_to_return);
	}
	if (!break_point && last)
	{
		str_len = ft_strlen(*line);
		str_to_return = ft_calloc(str_len + 1, sizeof(char));
		ft_memcpy(str_to_return, *line, str_len);
		a = ft_strlen(str_to_return);
		*line = &(*line)[str_len];
		return (str_to_return);
	}
}
// {
// 	char		*str_to_return;
// 	ssize_t		str_len;

// 	str_len = 0;
// 	if (break_point)
// 		str_len = (ssize_t)((char *)break_point - *((char **)line));
// 	else
// 		str_len = ft_strlen(*line);
// 	str_to_return = ft_calloc(str_len + 2, sizeof(char));
// 	ft_memcpy(str_to_return, *line, str_len + 1);
// 	*line = &(*line)[str_len + 1];
// 	return (str_to_return);
// }

ssize_t	keep_reading(int fd, void **line)
{
	char	*buffer;
	ssize_t	red;

	buffer = (char *) ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
	{
		free(*line);
		return (0);
	}
	red = read(fd, buffer, BUFFER_SIZE);
	if (red <= 0)
		return (0);
	*line = ft_strjoin(*line, buffer);
	free(buffer);
	return (red);
}

void	*start_reading(int fd, void **line)
{
	*line = (char *)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!*line)
		return (0);
	read(fd, *line, BUFFER_SIZE);
	return (*line);
}

char	*get_next_line(int fd)
{
	static void	*line;
	void		*break_point;
	char		*str_to_return;
	ssize_t		last;

	last = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	if (!line && !start_reading(fd, &line))
		return (0);
	break_point = NULL;
	while (!(break_point || last))
	{
		if (keep_reading(fd, &(line)) < BUFFER_SIZE)
			last = 1;
		break_point = ft_memchr(line, '\n', ft_strlen(line));
	}
	str_to_return = get_str(&line, break_point, last);
	if (!str_to_return)
		return (0);
	return (str_to_return);
}
