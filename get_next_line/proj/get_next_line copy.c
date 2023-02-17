/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:40:18 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/17 04:34:45 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 -L/Users/mamagalh/42Projects/libft/proj/ -lft get_next_line.c
#include "/Users/mamagalh/42Projects/#header/libft.h"
#include "limits.h"
#include <unistd.h>
#include <fcntl.h>

char	*get_next_line(int fd)
{
	static void		*cursor;
	void			*temp;
	static ssize_t	index;
	ssize_t			buffer_size;
	ssize_t			red;

	buffer_size = BUFFER_SIZE;
	temp = malloc(buffer_size * sizeof(char));
	red = read(fd, temp, buffer_size);
	if (red > 0)
	{
		cursor = ft_strchr(temp, '\n');
		if (*((int *)cursor))
		{
			
			index += ft_strlen(temp);
			return (temp);
		}
		else
		{
			*((int *)cursor) = 0;
			cursor = cursor + 1;
			return(temp);
		}
	}
	return (0);
}

// {
// 	static void		*cursor;
// 	void			*temp;
// 	ssize_t			index;
// 	ssize_t			buffer_size;
// 	ssize_t			red;

// 	buffer_size = BUFFER_SIZE;
// 	temp = malloc(buffer_size * sizeof(char));
// 	red = read(fd, temp, buffer_size);
// 	if (red > 0 && *((int *)temp))
// 	{
// 		cursor = ft_strchr(temp, '\n');
// 		if (!((int *)cursor))
// 			return (temp);
// 		else
// 		{
// 			*((int *)cursor) = 0;
// 			cursor = cursor + 1;
// 			return(temp);
// 		}
// 	}
// 	return (0);
// }

int	main(void)
{
	int	fd;
	char	*str;
	fd = open("file.txt", 2);
	str = get_next_line(fd);
	write(1, str, ft_strlen(str));
	return 0;
}
