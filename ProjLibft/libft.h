/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:49:02 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/01/13 17:38:02 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_islower(int c);
int	ft_isupper(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
int ft_toupper(int c);
int ft_tolower(int c);
char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_calloc(size_t count, size_t size);


/*
int	main(void)
{
	if (sizeof(void *) == 4)
		typedef unsigned long size_t;
	else if (sizeof(void *) == 8)
		typedef unsigned long long size_t;
	return (0);
}*/
