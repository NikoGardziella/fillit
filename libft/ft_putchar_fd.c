/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:28:16 by conguyen          #+#    #+#             */
/*   Updated: 2021/12/01 15:07:03 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** DESCRIPTION
** ft_putchar() function Outputs the char c to the file descriptor fd.
*/

void	ft_putchar_fd(char const c, int fd)
{
	write(fd, &c, 1);
}
