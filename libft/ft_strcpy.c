/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:20:39 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 15:02:59 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_strcpy() function copies the string pointed to by src, including the
** terminating null byte ('\0'), to the buffer pointed to by dest. The strings
** may not overlap, and the destination string dest must be large enough to
** receive the copy.
*/

char	*ft_strcpy(char *dest, const char *src)
{
	int	c;

	c = 0;
	while (src[c])
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
