/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 02:56:20 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/03/03 19:32:04 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/mamagalh/42Projects/ProjLibft/libft.h"
#include <string.h>
#include <stdio.h>

int	test_size1(void)
{
	t_list	*l;
	int		actual;
	int		expected;

	l = ft_lstnew_bonus(ft_strdup("1"));
	l->next = ft_lstnew_bonus(ft_strdup("2"));
	l->next->next = ft_lstnew_bonus(ft_strdup("3"));
	expected = 3;
	actual = ft_lstsize_bonus(l);
	if (actual == expected)
		return (1);
	return (0);
}

int	test_size2(void)
{
	t_list * l =  NULL;
	if(ft_lstsize_bonus(l) != 0)
		return (1);
	ft_lstadd_front_bonus(&l, ft_lstnew_bonus((void*)1));
	if (ft_lstsize_bonus(l) != 1)
		return (1);
	ft_lstadd_front_bonus(&l, ft_lstnew_bonus((void*)2));
	if (ft_lstsize_bonus(l) != 2)
		return (1);
	return (0);
}

int	test_lstlast(void)
{
	t_list	*l;
	t_list	*expected;
	t_list	*actual;

	l = ft_lstnew_bonus(ft_strdup("1"));
	l->next = ft_lstnew_bonus(ft_strdup("2"));
	l->next->next = ft_lstnew_bonus(ft_strdup("3"));
	expected = l->next->next;
	actual = ft_lstlast_bonus(l);
	if (actual == expected)
		return (1);
	return (0);
}

int	test_lstadd_back(void)
{
 	t_list	*l = ft_lstnew_bonus(ft_strdup("nyacat"));
	t_list	*n = ft_lstnew_bonus(ft_strdup("OK"));

	ft_lstadd_back_bonus(&l, n);
	if (l->next == n && !(strcmp(l->next->content, "OK")))
	{
		return (1);
	}
	return (0);
}

int	test_lstadd_back2(void)
{
	t_list	*l = ((void *)0);
	t_list	*n = ft_lstnew_bonus(strdup("OK"));

	ft_lstadd_back_bonus(&l, n);
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

void *addone(void *c)
{
	*((char)c) = 'a';
	return (c);
}

int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	**temp;

	*lst1 = ft_lstnew_bonus("a");
	*lst2 = ft_lstnew_bonus("b");
	*lst3 = ft_lstnew_bonus("c");
	lst1->next = lst2;
	lst2->next = lst3;
	return (0);
}
