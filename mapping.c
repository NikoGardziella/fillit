/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapping.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngardzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:15:41 by ngardzie          #+#    #+#             */
/*   Updated: 2022/01/20 09:15:42 by ngardzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

/*
** calculates the smallest possible map size
*/

int	highest_sqrt(int count)
{
	int	size;

	size = 2;
	while (size * size < count * 4)
		size++;
	return (size);
}

/*
** Counts the number of tetrimino pieces
*/

int	count_tets(t_tet *tetrimino)
{
	int	num;

	num = 0;
	while (tetrimino)
	{
		tetrimino = tetrimino->next;
		num++;
	}
	return (num);
}

/*
** Creates a new 2D array. Places '.' to each
** position and frees the previous 2D array
*/

char	**increment_map(char **map, int map_size)
{
	char	**new_map;
	int		x;

	new_map = (char **)malloc(sizeof(char *) * map_size + 1);
	x = 0;
	while (x < map_size)
	{
		new_map[x] = ft_strnew(map_size + 1);
		free(map[x]);
		ft_memset(new_map[x], '.', map_size);
		x++;
	}
	new_map[x] = NULL;
	free(map);
	return (new_map);
}

/*
** creates a new 2D array and places '.' to each position.
*/

char	**create_map(int map_size)
{
	char	**map;
	int		x;

	map = (char **)malloc(sizeof(char *) * map_size + 1);
	x = 0;
	while (x < map_size)
	{
		map[x] = ft_strnew(map_size + 1);
		ft_memset(map[x], '.', map_size);
		x++;
	}
	map[x] = NULL;
	return (map);
}
