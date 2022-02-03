/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:59:34 by conguyen          #+#    #+#             */
/*   Updated: 2022/01/18 08:23:34 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_strsplit() function allocates with malloc(3) and returns an array of
** "fresh" strings (all ending with '\0' including the array itself) obtained
** by splitting s using the character c as a delimiter.
*/

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
	{
		if (s[len] != c)
			len++;
		else
			return (len);
	}
	return (len);
}

static int	ft_skipc(char const *s, char c, int count)
{
	while (s[count] != '\0' && s[count] == c)
		count++;
	return (count);
}

static int	ft_skipnotc(char const *s, char c, int count)
{
	while (s[count] != '\0' && s[count] != c)
		count++;
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**strarr;
	int		count;
	size_t	x;
	size_t	wordcount;

	if (s == NULL)
		return (NULL);
	count = 0;
	x = 0;
	wordcount = ft_wordcount(s, c);
	strarr = (char **)malloc(sizeof(char *) * (wordcount + 1));
	if (strarr == NULL)
		return (NULL);
	while (x < wordcount)
	{
		count = ft_skipc(s, c, count);
		strarr[x] = ft_strnew(ft_wordlen(&s[count], c) + 1);
		if (strarr[x] == NULL)
			return (ft_free_2darray((void **)strarr, x));
		ft_strncpy(strarr[x], &s[count], ft_wordlen(&s[count], c));
		count = ft_skipnotc(s, c, count);
		x++;
	}
	strarr[wordcount] = NULL;
	return (strarr);
}
