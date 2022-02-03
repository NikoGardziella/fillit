/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 12:36:20 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 15:10:57 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_strnstr() function locates the first occurence of the null terminated
** string needle in the string haystack, where not more than len characters are
** searched. Characters that appear after a '\0' character are not searched.
**
** RETURN VALUE
** If needle is an empty string, haystack is returned, if needle occurs nowhere
** in haystack NULL is returned, otherwise a pointer to the first character of
** the first occurence of needle is returned.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	c;
	size_t	nlen;

	nlen = ft_strlen(needle);
	if (nlen == 0)
		return ((char *)haystack);
	c = 0;
	while (haystack[c] != '\0' && nlen <= len)
	{
		if (haystack[c] == needle[0]
			&& ft_strncmp(&haystack[c], needle, nlen) == 0)
			return (&((char *)haystack)[c]);
		c++;
		len--;
	}
	return (NULL);
}
