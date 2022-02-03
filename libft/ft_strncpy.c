/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:20:39 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 15:09:42 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_strncpy() function copies at most len bytes of src to dest. if there is no
** null bytes among the first n bytes of src, the string placed in dest will
** not be null-terminated. if the length of src is less than len, ft_strncpy()
** writes additional null bytes to dest to ensure that a total of len bytes
** are written.
*/

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	unsigned int	c;

	c = 0;
	while (src[c] && c < len)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < len)
		dest[c++] = '\0';
	return (dest);
}
