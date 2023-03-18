/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 03:31:39 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/03/17 01:37:55 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/mamagalh/42Projects/printf/proj/ft_printf.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char *p = 0;
	int i;
	int j;

	//i = ft_printf("%s %d %i %u %x    %X  %X  %X  %X", "-42", -42, -42 ,-42 ,-42, 42, 42, 42, 42);
	i = ft_printf("%s", p);
	printf("\n");
	j = printf("%s", p);
	printf("\n%d  ->  %d", i, j);
	//ft_printf("i%%udh\nc%c\ns%s\nd%d\ni%i\np%p\nx%x\nX%X", 'a', "hello world!!", INT_MIN, INT_MAX, NULL, INT64_MAX, (INT32_MIN));
	// ft_pritnf("");
	return (0);
}