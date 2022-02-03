/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:17:25 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 15:02:21 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_strclr() function sets every character of the string to the value '\0'.
*/

void	ft_strclr(char *s)
{
	if (s != NULL)
		ft_memset(s, '\0', ft_strlen(s));
}
