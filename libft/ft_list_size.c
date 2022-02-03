/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:53:34 by conguyen          #+#    #+#             */
/*   Updated: 2021/12/01 14:50:55 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_lst_size() function returns size of the linked list.
*/

size_t	ft_list_size(t_list *list)
{
	t_list	*temp;
	size_t	size;

	size = 0;
	temp = list;
	while (temp != NULL)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
