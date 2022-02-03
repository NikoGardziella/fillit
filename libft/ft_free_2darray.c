/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_2darray.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 09:03:00 by conguyen          #+#    #+#             */
/*   Updated: 2021/12/01 14:49:39 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** DESCRIPTION
** ft_free_2darray() function frees the memory of 2d array s starting at c and
** going backwards.
*/

void	*ft_free_2darray(void **s, int c)
{
	while (c >= 0)
	{
		free(s[c]);
		c--;
	}
	free(s);
	return (NULL);
}
