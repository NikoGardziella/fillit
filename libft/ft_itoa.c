/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:40:32 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 14:50:35 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** DESCRIPTION
** ft_itoa() function allocates with malloc(3) and returns a "fresh" string
** ending with '\0' representing the integer n given as argument.
*/

static size_t	ft_getlen(int n)
{
	size_t		len;
	long long	num;

	num = n;
	len = 0;
	if (num <= 0)
	{
		num = -num;
		len = 1;
	}
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	long long	num;

	num = n;
	len = ft_getlen(n);
	if (n < 0)
		num = -num;
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	while (len--)
	{
		str[len] = (num % 10) + 48;
		num = num / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
