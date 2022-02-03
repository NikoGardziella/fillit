/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:28:08 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 14:52:06 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** DESCRIPTION
** ft_lstdel() takes as a parameter the address of a pointer to a link and frees
** the memory of this link and every successors of that link using the functions
** del and free(3). Finally the pointer to the link that was just freed must be
** set to NULL.
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next;

	next = *alst;
	while (next != NULL)
	{
		next = next->next;
		ft_lstdelone(alst, del);
		*alst = next;
	}
}
