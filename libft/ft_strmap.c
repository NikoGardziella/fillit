/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:12:29 by conguyen          #+#    #+#             */
/*   Updated: 2021/12/01 14:58:53 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_strmap() function applies the function f to each character of the string
** given as argument to create a "fresh" new string with malloc(3) resulting
** from the successive applications of f.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	c;
	size_t	len;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = ft_strnew(sizeof(*str) * len);
	if (str == NULL)
		return (NULL);
	c = 0;
	while (s[c] != '\0')
	{
		str[c] = (*f)(s[c]);
		c++;
	}
	return (str);
}
