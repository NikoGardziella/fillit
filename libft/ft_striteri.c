/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:43:44 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 15:06:18 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_striteri() function applies the function f to each character of the string
** passed as argument, and passing its index as first argument. Each character
** is passed by address to f to be modified if necessary.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	c;

	c = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[c] != '\0')
	{
		(*f)(c, &s[c]);
		c++;
	}
}
