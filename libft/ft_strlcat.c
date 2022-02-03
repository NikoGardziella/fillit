/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:21:37 by conguyen          #+#    #+#             */
/*   Updated: 2021/11/30 13:44:16 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** ft_strlcat() function append string src to the end of dst. It will append
** at most dstsize - strlen(dst) - 1 characters. It will then NULL terminate,
** unless dstsize is 0 or the original dst string was longer than dstsize.
**
** RETURN VALUE
** ft_strlcat() function returns the initial length of dst plus the length of
** src. If the return value is >= dstsize, the output has ben truncated
*/

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t			dstlen;
	unsigned int	len;
	size_t			start;

	start = ft_strlen(dst);
	dstlen = start;
	len = 0;
	if (dstlen < dstsize)
	{
		while (src[len] && dstsize - dstlen - 1 > len)
		{
			dst[start] = src[len];
			start++;
			len++;
		}
		dst[len + dstlen] = '\0';
	}
	if (dstlen < dstsize)
		return (dstlen + ft_strlen(src));
	return (ft_strlen(src) + dstsize);
}
