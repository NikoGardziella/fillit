/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:21:37 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 15:01:31 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_strcat() function appends the s2 string to the s1 string, overwriting the
** terminating null byte ('\0') at the end of s1, and adds a terminating null
** byte. The strings may not overlap, and the s string must have enough space
** for the result. If s is not large enough program behavior is unpredictable
*/

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	size_t	s1len;
	size_t	len;

	s1len = ft_strlen(s1);
	len = 0;
	while (s2[len])
	{
		s1[s1len] = s2[len];
		s1len++;
		len++;
	}
	s1[s1len] = '\0';
	return (s1);
}
