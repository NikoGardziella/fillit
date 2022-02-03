/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 17:05:21 by conguyen          #+#    #+#             */
/*   Updated: 2022/01/18 10:30:55 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_line(char **saved, char **line, int c)
{
	char	*temp;

	while ((*saved)[c] != '\0' && (*saved)[c] != '\n')
		c++;
	if ((*saved)[c] == '\n')
	{
		*line = ft_strsub(*saved, 0, c);
		if (line == NULL)
			free(*saved);
		if (line == NULL)
			return (-1);
		temp = ft_strdup(&((*saved)[c + 1]));
		free(*saved);
		if (temp == NULL)
			return (-1);
		*saved = temp;
		return (1);
	}
	*line = ft_strdup(*saved);
	ft_strdel(saved);
	if (*line == NULL)
		return (-1);
	return (1);
}

static int	ft_save_buffer(char **saved, char *buf)
{
	char	*temp;

	if (*saved != NULL)
	{
		temp = ft_strjoin(*saved, buf);
		free(*saved);
		if (temp == NULL)
			return (-1);
		*saved = temp;
		return (1);
	}
	*saved = ft_strdup(buf);
	if (*saved == NULL)
		return (-1);
	return (1);
}

int	get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static char	*saved[MAX_FD];
	int			ret;

	if (fd < 0 || fd >= 4096 || line == NULL || BUFF_SIZE <= 0)
		return (-1);
	if (saved[fd] != NULL)
		if (ft_strchr(saved[fd], '\n') != NULL)
			return (ft_get_line(&saved[fd], line, 0));
	ret = 1;
	while (ret)
	{
		ret = read(fd, buf, BUFF_SIZE);
		if (ret < 0)
			return (-1);
		if (ret == 0 && saved[fd] == NULL)
			return (0);
		buf[ret] = '\0';
		if (ft_save_buffer(&saved[fd], buf) == -1)
			return (-1);
		if (saved[fd] != NULL)
			if (ft_strchr(saved[fd], '\n') != NULL)
				break ;
	}
	return (ft_get_line(&saved[fd], line, 0));
}
