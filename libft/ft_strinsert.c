/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 07:51:21 by conguyen          #+#    #+#             */
/*   Updated: 2021/12/21 08:08:29 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_strinsert() function returns a "fresh" string, by inserting str inside dst
** in index insert
*/

char	*ft_strinsert(char *dst, char *str, size_t insert)
{
	char	*tmp;
	char	*res;
	char	*start;
	char	*end;

	if (str == NULL || dst == NULL)
		return (dst);
	start = ft_strsub(dst, 0, insert);
	end = ft_strsub(dst, insert, ft_strlen(dst));
	tmp = ft_strjoin(start, str);
	res = ft_strjoin(tmp, end);
	free(start);
	free(end);
	free(tmp);
	return (res);
}
