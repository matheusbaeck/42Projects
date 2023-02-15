/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:19:54 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/15 08:30:38 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst)
	{
		temp = *lst;
		while (temp->next)
		{
			del(lst->content);
			free(*lst);
			temp = temp->next;
		}
		lst = 0;
	}
}

{
	t_list	*new_nodo;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			new_nodo = ft_lstlast(*lst);
			new_nodo->next = new;
		}
	}
}