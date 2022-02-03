/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:17:36 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 15:06:08 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_striter() function apllies the function f to each charachter of the string
** passed as argument. Each character is passed by address to f to be modified
** if necessary.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	size_t	c;

	c = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[c] != '\0')
	{
		(*f)(&s[c]);
		c++;
	}
}
