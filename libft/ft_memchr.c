/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:14:40 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 14:58:00 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** DESCRIPTION
** ft_memchr() function scans the initial n bytes of the memory area pointed to
** by s for the first instance of c.
**
** RETURN VALUES
** ft_memchr() returns a pointer to the matching byte or NULL if the character
** does not occur in the given memory area.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n)
	{
		if (((unsigned char *)s)[x] == (unsigned char)c)
			return ((unsigned char *)s + x);
		x++;
	}
	return (NULL);
}
