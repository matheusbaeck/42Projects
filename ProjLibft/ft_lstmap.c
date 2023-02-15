/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:43:17 by mamagalh@st       #+#    #+#             */
/*   Updated: 2023/02/15 02:21:53 by mamagalh@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;

	if (!lst && !f && !del)
		return (0);
	lst2 = ft_lstnew(f(lst->content));
	while (lts->next)
	{
		ft_lstdelone(lst, del);
		lts = lst->next;
		lst2->next = ft_lstnew(f(lst->content));
		lst2 = lst2->next;
	}
	return (*lst2);
}
