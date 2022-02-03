/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:19:05 by conguyen          #+#    #+#             */
/*   Updated: 2021/12/01 15:07:27 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** DESCRIPTION
** ft_putstr() function Outputs the char c to the standard output.
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
