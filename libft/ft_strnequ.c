/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:14:50 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 15:09:58 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_strnequ() function lexicographically compares up to n characters or until
** a '\0' is reached between s1 and s2. If the two strings are identical the
** function returns 1, or 0 otherwise.
*/

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int	cmp;

	if (s1 == NULL || s2 == NULL)
		return (0);
	cmp = ft_strncmp(s1, s2, n);
	if (cmp != 0)
		return (0);
	return (1);
}
