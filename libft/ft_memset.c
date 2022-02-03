/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:34:20 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 15:00:55 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESTRPITION
** ft_memset() function fills the first len bytes of the memory area pointed to
** by b with the constant byte c.
**
** RETURN VALUE
** ft_memset() function returns a pointer to the memory area b.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	count;

	count = 0;
	while (count < len)
	{
		((unsigned char *)b)[count] = (unsigned char)c;
		count++;
	}
	return (b);
}
