/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:37:05 by conguyen          #+#    #+#             */
/*   Updated: 2021/12/01 14:52:02 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_lstdel() does the same thing as ft_lstdel() function but also returns
** NULL.
*/

void	*ft_lstdelr(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next;

	next = *alst;
	while (next != NULL)
	{
		next = next->next;
		ft_lstdelone(alst, del);
		*alst = next;
	}
	return (NULL);
}
