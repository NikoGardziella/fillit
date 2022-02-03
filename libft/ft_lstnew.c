/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 07:45:50 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 14:54:30 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** DESCRIPTION
** ft_lstnew() function allocates with malloc(3) and returns a "fresh" link.
** The variables content and content_size of the new link are initialized by
** copy of the parameters of the function If the parameter content is nul, the
** variable content is initialized to NULL and the variable content_size is
** initialized to 0 even if the parameter content_size isn't. The variable
** next is initialized to NULL.
*/

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlist;

	newlist = (t_list *)malloc(sizeof(t_list));
	if (newlist == NULL)
		return (NULL);
	if (content == NULL)
	{
		newlist->content = NULL;
		newlist->content_size = 0;
	}
	else
	{
		newlist->content = malloc(content_size);
		if (newlist->content == NULL)
			return (NULL);
		newlist->content_size = content_size;
		ft_memcpy(newlist->content, content, content_size);
	}
	newlist->next = NULL;
	return (newlist);
}
