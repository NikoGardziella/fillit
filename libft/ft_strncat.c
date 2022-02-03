/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:21:37 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 15:08:02 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_strncat() function appends at most n bytes from s2 to s1, overwriting the
** terminating null byte ('\0') at the end of s1 and then adds a terminating
** null byte. The strings may not overlap, and the s1 string must have enough
** space for the result. Size of s1 must be at least ft_strlen(s1) + n + 1.
*/

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t			s1len;
	unsigned int	len;

	s1len = ft_strlen(s1);
	len = 0;
	while (s2[len] && len < n)
	{
		s1[s1len] = s2[len];
		s1len++;
		len++;
	}
	s1[s1len] = '\0';
	return (s1);
}
