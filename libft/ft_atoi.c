/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:11:32 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/27 14:49:19 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** ft_atoi() function converts the initial portion of the string pointed to by
** nptr to int.
*/

int	ft_atoi(const char *nptr)
{
	int	neg;
	int	res;
	int	count;

	res = 0;
	neg = 1;
	count = 0;
	while (nptr[count] && (nptr[count] == 32 || nptr[count] == 9
			|| nptr[count] == 10 || nptr[count] == 11 || nptr[count] == 12
			|| nptr[count] == 13))
		count++;
	if (nptr[count] == 45 || nptr[count] == 43)
	{
		if (nptr[count++] == 45)
			neg = -1;
	}
	while (nptr[count] && nptr[count] >= 48 && nptr[count] <= 57)
	{
		res *= 10;
		res += nptr[count++] - 48;
	}
	res *= neg;
	return (res);
}
