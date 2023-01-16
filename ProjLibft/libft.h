/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:49:02 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/01/16 22:42:34 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	strlcat(char *dst, const char *src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
int		ft_atoi(const char *str);
char	*ft_calloc(size_t count, size_t size);
char	*strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_itoa(int n);

/*
int	main(void)
{
	if (sizeof(void *) == 4)
		typedef unsigned long size_t;
	else if (sizeof(void *) == 8)
		typedef unsigned long long size_t;
	return (0);
}*/

#endif