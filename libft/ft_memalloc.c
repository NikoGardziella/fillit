/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:42:24 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 14:57:06 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** DESCRIPTION
** ft_memalloc() function allocates with malloc(3) and returns a "fresh" memory
** area of size size. The memory allocated is initialized to 0.
*/

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = malloc(sizeof(*ptr) * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
