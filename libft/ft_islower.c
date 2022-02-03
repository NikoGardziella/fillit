/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:17:20 by conguyen          #+#    #+#             */
/*   Updated: 2021/12/01 15:21:51 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_islower() function tests for any lower-case letter. The value of the
** argument must be representable as an unsigned char or the value of EOF.
*/

int	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}