/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 02:56:20 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/15 07:59:57 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>


int	test_size1(void)
{
	t_list	*l;
	int		actual;
	int		expected;

	l = ft_lstnew(ft_strdup("1"));
	l->next = ft_lstnew(ft_strdup("2"));
	l->next->next = ft_lstnew(ft_strdup("3"));
	expected = 3;
	actual = ft_lstsize(l);
	if (actual == expected)
		return (1);
	return (0);
}

int	test_size2(void)
{
	t_list * l =  NULL;
	if(ft_lstsize(l) != 0)
		return (1);
	ft_lstadd_front(&l, ft_lstnew((void*)1));
	if (ft_lstsize(l) != 1)
		return (1);
	ft_lstadd_front(&l, ft_lstnew((void*)2));
	if (ft_lstsize(l) != 2)
		return (1);
	return (0);
}

int	test_lstlast(void)
{
	t_list	*l;
	t_list	*expected;
	t_list	*actual;

	l = ft_lstnew(ft_strdup("1"));
	l->next = ft_lstnew(ft_strdup("2"));
	l->next->next = ft_lstnew(ft_strdup("3"));
	expected = l->next->next;
	actual = ft_lstlast(l);
	if (actual == expected)
		return (1);
	return (0);
}

int	test_lstadd_back(void)
{
 	t_list	*l = ft_lstnew(ft_strdup("nyacat"));
	t_list	*n = ft_lstnew(ft_strdup("OK"));

	ft_lstadd_back(&l, n);
	if (l->next == n && !(strcmp(l->next->content, "OK")))
	{
		return (1);
	}
	return (0);
}

int	test_lstadd_back2(void)
{
	t_list	*l = ((void *)0);
	t_list	*n = ft_lstnew(strdup("OK"));

	ft_lstadd_back(&l, n);
	if (l == n && !strcmp(l->content, "OK"))
	{
		free(l->next);
		free(l);
		return (1);
	}
	free(l->next);
	free(l);
	return (0);
}

int	main(void)
{
	test_lstadd_back2();
	return (0);
}
