/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:39:56 by conguyen          #+#    #+#             */
/*   Updated: 2021/12/01 14:58:51 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_strmapi() function applies the function f to each character of the string
** passed as argument by giving its index as first argument to create a "fresh"
** new string with malloc(3) resulting from the successive applications of f.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	c;
	size_t			len;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = ft_strnew(sizeof(*str) * len);
	if (str == NULL)
		return (NULL);
	c = 0;
	while (s[c] != '\0')
	{
		str[c] = (*f)(c, s[c]);
		c++;
	}
	return (str);
}
