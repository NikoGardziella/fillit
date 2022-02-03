/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:47:36 by conguyen          #+#    #+#             */
/*   Updated: 2021/12/01 14:57:35 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_strrev() function allocates with malloc(3) and returns the string s
** reversed
*/

char	*ft_strrev(char const *s)
{
	size_t	len;
	char	*rev;
	size_t	c;

	len = ft_strlen(s);
	rev = ft_strnew(sizeof(char) * len + 1);
	c = 0;
	if (rev == NULL)
		return (NULL);
	while (len != 0)
	{
		rev[len - 1] = s[c];
		len--;
		c++;
	}
	return (rev);
}
