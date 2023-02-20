/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 22:23:32 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/20 22:23:34 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	int		fd;
	size_t	len;
	char	*str;

	fd = open("file.txt", 2);
	while (!str || *str)
	{
		str = get_next_line(fd);
		printf("%s\n", str);
	}
	if (*str == 0)
	{
		printf("retorna NULL");
	}
	return (0);
}
