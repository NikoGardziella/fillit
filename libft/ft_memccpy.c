/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:14:21 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 14:57:21 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** DESCRIPTION
** ft_memccpy() function copies no more than n bytes from memory area dst,
** stopping when the character c is found.
** If the memory areas overlap, the results are undefined.
**
** RETURN VALUES
** ft_memccpy() funtion returns a pointer to the next character in dst after c,
** or NULL if c was not found in the first n characters of src.
*/

void	*ft_memccpy(
		void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t	x;

	x = 0;
	while (n-- > 0)
	{
		((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
		if (((unsigned char *)src)[x] == (unsigned char)c)
			return (dst + x + 1);
		x++;
	}
	return (NULL);
}
