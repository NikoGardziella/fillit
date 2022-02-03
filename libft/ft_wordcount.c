/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:01:45 by conguyen          #+#    #+#             */
/*   Updated: 2021/12/01 14:55:55 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_wordcount() function returns the amount of words in string s delimited
** by c.
*/

size_t	ft_wordcount(char const *s, char c)
{
	size_t	wordcount;
	int		count;

	count = 0;
	wordcount = 0;
	while (s[count] != '\0')
	{
		while (s[count] == c && s[count] != '\0')
			count++;
		if (s[count] != c && s[count] != '\0')
			wordcount++;
		while (s[count] != c && s[count] != '\0')
			count++;
	}
	return (wordcount);
}
