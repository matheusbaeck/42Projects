/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 03:31:39 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/03/15 00:50:38 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/mamagalh/42Projects/#header/ft_printf.h"
#include <string.h>

int	main(void)
{
	void *p[10];

	ft_printf("i%%udh\nc%c\ns%s\nd%d\ni%i\np%p\nx%x\nX%X", 'a', "hello world!!", INT_MIN, INT_MAX, NULL, INT64_MAX, (INT32_MIN));
	printf("\ni%%udh\nc%c\ns%s\nd%d\ni%i\np%p\nx%x\nX%X", 'a', "hello world!!", INT_MIN, INT_MAX, NULL, INT64_MAX, (INT32_MIN));
	// ft_pritnf("");
	return (0);
}