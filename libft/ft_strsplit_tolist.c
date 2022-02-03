/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_tolist.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:04:02 by conguyen          #+#    #+#             */
/*   Updated: 2021/12/01 14:58:40 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_strsplit() function allocates with malloc(3) and returns a linked list of
** "fresh" strings (all ending with '\0') obtained by splitting s using the
** character c as a delimiter.
*/

static void	ft_dellist(void *content, size_t size)
{
	ft_memdel(&content);
	(void)size;
}

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

static int	ft_skip(char const *s, char c, int count, size_t wlen)
{
	count = count + wlen;
	while (s[count] != '\0' && s[count] == c)
		count++;
	return (count);
}

static void	ft_tolist(t_list **lst, char const *s, int count, size_t wlen)
{
	char	*str;

	str = ft_strsub(s, count, wlen);
	if (*lst == NULL && s[count] != '\0')
		*lst = ft_lstnew(str, wlen);
	else if (s[count] != '\0')
	{
		(*lst)->next = ft_lstnew(str, wlen);
		if ((*lst)->next == NULL)
			return ;
		*lst = (*lst)->next;
	}
	free(str);
}

t_list	*ft_strsplit_tolist(char const *s, char c)
{
	t_list	*list;
	t_list	*tmp;
	int		count;
	size_t	wlen;

	count = 0;
	wlen = 0;
	tmp = NULL;
	list = NULL;
	while (s[count] != '\0')
	{
		count = ft_skip(s, c, count, wlen);
		wlen = ft_wordlen(&s[count], c);
		ft_tolist(&tmp, s, count, wlen);
		if (tmp == NULL)
			return (ft_lstdelr(&list, ft_dellist));
		if (list == NULL)
			list = tmp;
	}
	return (list);
}
