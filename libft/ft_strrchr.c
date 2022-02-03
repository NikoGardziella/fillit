/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 10:07:32 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 15:11:23 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_strrchr() function returns a pointer to the last occurence of the
** character c in the string s.
**
** RETURN VALUE
** ft_strrchr() function returns a pointer to the matched character or NULL if
** the character is not found. The terminating null byte is considered part of
** the string, so that if c is specified as '\0' the function returns a pointer
** to the terminator.
*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s) + 1;
	while (len-- != 0)
	{
		if (((unsigned char *)s)[len] == (unsigned char)c)
			return ((char *)s + len);
	}
	return (NULL);
}
