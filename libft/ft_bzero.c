/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 08:45:17 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 14:50:00 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_bzero() function erases the data in the n bytes of the memory starting
** at the location pointed to by s, by writing zeroes (bytes containing '\0')
** to that area.
*/

void	ft_bzero(void *s, size_t n)
{
	size_t	c;

	c = 0;
	while (c < n)
		((char *)s)[c++] = 0;
}
