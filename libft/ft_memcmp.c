/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:35:19 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 14:58:38 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** DESCRIPTION
** ft_memcmp() function compares the first n bytes of the memory areas
** s1 and s2.
**
** RETURN VALUES
** ft_memcmp() function returns an integer less than, equal to or greater than
** zero if the first n bytes of s1 is gound, respectively to be less than, to
** match or be greater than the first n bytes of s2.
** if n is zero, the return value is zero.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if (*(const char *)s1 != *(const char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		n--;
		s1++;
		s2++;
	}
	return (0);
}
