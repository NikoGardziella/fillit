/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:15:41 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 15:06:32 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_strjoin() function allocates with malloc(3) and returns a "fresh" string
** ending with '\0', result of the concatenation of s1 and s2.
*/

char	*ft_strjoin(char const *s1, char const*s2)
{
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strcat(ft_strcat(str, s1), s2);
	return (str);
}
