/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:40:18 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/03/05 19:27:30 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

char	*get_str(char **line, char *break_point, int red)
{
	char		*str_to_return;
	char		*line_temp;
	ssize_t		str_len;
	ssize_t		line_len;

	str_len = 0;
	while (!(line[0][str_len] == '\n' 
		|| line[0][str_len] == '\0'))
		str_len++;
	if (line[0][str_len] == '\n')
		str_len++;
	if (!break_point && red <= 0 && !(**line))
		return (0);
	str_to_return = ft_calloc(str_len + 1, sizeof(char));
	ft_strlcpy(str_to_return, *line, str_len + 1);
	line_temp = *line;
	line_len = ft_strlen(&line_temp[str_len]);
	*line = ft_calloc(line_len + 1, sizeof(char));
	ft_strlcpy(*line, &line_temp[str_len], line_len + 1);
	free(line_temp);
	return (str_to_return);
}

int	keep_reading(int fd, char **line)
{
	char	*buffer;
	char	*line_temp;
	int		red;

	buffer = (char *) ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
	{
		free(*line);
		return (0);
	}
	red = read(fd, buffer, BUFFER_SIZE);
	if (red < 0)
	{
		free (buffer);
		// no free no null 	>> expected: "aaaaaaaaaa\n", got: "ccccccccaaaaaaaaaa\n"
		//free (*line);  	>> abort
		//*line = 0; 		>> leaks
		return (red);
	}
	if (!(*line))
		*line = ft_calloc(1, sizeof(char *));
	line_temp = *line;
	*line = ft_strjoin(*line, buffer);
	free(line_temp);
	free(buffer);
	return (red);
}

char	*get_next_line(int fd)
{
	static char	*line;
	void		*break_point;
	char		*str_to_return;
	int			red;

	red = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	break_point = NULL;
	while (!break_point && red > 0)
	{
		if (line)
			break_point = ft_memchr(line, '\n', ft_strlen(line));
		if (!break_point)
			red = keep_reading(fd, &(line));
	}
	if (red < 0)
		return (0);
	str_to_return = get_str(&line, break_point, red);
	if (!str_to_return)
	{
		free(line);
		line = 0;
		return (0);
	}
	return (str_to_return);
}
