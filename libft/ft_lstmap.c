/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 20:50:56 by conguyen          #+#    #+#             */
/*   Updated: 2021/12/01 14:52:15 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_lstmap() function Iterates a list lst and applies the function f to each
** link to create a "fresh" list (using malloc(3)) resulting from the successive
** applications of f. If the allocation fails, the function returns NULL.
*/

static void	ft_del(void *content, size_t size)
{
	if (content != NULL)
	{
		ft_memdel(&content);
		(void)size;
	}
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;
	t_list	*temp;

	if (lst == NULL || f == NULL)
		return (NULL);
	temp = ft_lstnew((*f)(lst)->content, (*f)(lst)->content_size);
	if (temp == NULL)
		return (NULL);
	newlist = temp;
	while (lst->next)
	{
		lst = lst->next;
		temp->next = ft_lstnew((*f)(lst)->content, (*f)(lst)->content_size);
		if (!temp->next)
		{
			newlist = NULL;
			ft_lstdel(&newlist, &ft_del);
			return (NULL);
		}
		temp = temp->next;
	}
	return (newlist);
}
