/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:02:31 by conguyen          #+#    #+#             */
/*   Updated: 2021/12/01 14:58:33 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_strsub() function allocates with malloc(3) and returns a "fresh" substring
** from the string given as argument. The substring begins at index start and
** is of size len. If start and len aren't refering to a valid substring, the
** behavior is undefined.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	c;

	c = 0;
	if (s == NULL)
		return (NULL);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	while (c < len)
	{
		str[c] = s[start];
		c++;
		start++;
	}
	return (str);
}
