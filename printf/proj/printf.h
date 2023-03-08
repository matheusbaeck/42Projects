/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 03:50:39 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/03/08 04:24:36 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "limits.h"
# include <unistd.h>
# include <stdlib.h>

char	*ft_anytoa(va_list arg_list, char format);
char	*ft_is_format(va_list arg_list, char format);
int		ft_print(char *s);
int		ft_printf(char *format, ...);
char	*ft_d(va_list arg_list);

#endif