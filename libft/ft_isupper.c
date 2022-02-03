/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:14:56 by conguyen          #+#    #+#             */
/*   Updated: 2021/12/01 15:17:56 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_isupper() function tests for any upper-case letter. The value of the
** argument must be representable as an unsigned char or the value of EOF.
*/

int	ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}