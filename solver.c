/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngardzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:49:27 by ngardzie          #+#    #+#             */
/*   Updated: 2022/01/20 14:49:28 by ngardzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

/*
** checks that the tetrimino piece can fit into the map in x axis
*/

int	check_bounds_x(t_tet *tetrimino, int map_size)
{
	if (tetrimino->coords[0][0] + tetrimino->x < map_size)
		if (tetrimino->coords[1][0] + tetrimino->x < map_size)
			if (tetrimino->coords[2][0] + tetrimino->x < map_size)
				if (tetrimino->coords[3][0] + tetrimino->x < map_size)
					return (1);
	return (0);
}

/*
** checks that the tetrimino piece can fit into the map in y axis
*/

int	check_bounds_y(t_tet *tetrimino, int map_size)
{
	if (tetrimino->coords[0][1] + tetrimino->y < map_size)
		if (tetrimino->coords[1][1] + tetrimino->y < map_size)
			if (tetrimino->coords[2][1] + tetrimino->y < map_size)
				if (tetrimino->coords[3][1] + tetrimino->y < map_size)
					return (1);
	return (0);
}

/*
** Places letter or '.' on the map according to the coordinates given.
*/

void	place_remove_piece(t_tet *tetrimino, char **map, int ch)
{
	int	x;
	int	y;
	int	c;

	c = 0;
	x = 0;
	y = 0;
	while (c <= 3)
	{
		x = tetrimino->coords[c][0] + tetrimino->x;
		y = tetrimino->coords[c][1] + tetrimino->y;
		map[y][x] = ch;
		c++;
	}
}

/*
** checks that new tetrimino piece is not overlaping with previous ones.
*/

int	check_overlap(t_tet *tetrimino, char **map)
{
	int	x;
	int	y;
	int	c;

	c = 0;
	x = tetrimino->coords[0][0] + tetrimino->x;
	y = tetrimino->coords[0][1] + tetrimino->y;
	while (c <= 3)
	{
		if (map[y][x] != '.')
		{
			return (0);
		}
		c++;
		x = tetrimino->coords[c][0] + tetrimino->x;
		y = tetrimino->coords[c][1] + tetrimino->y;
	}
	return (1);
}

/*
** If newpiece does not fit function will try it
** in new coordinates increasing x and then y
*/

int	solver(t_tet *tetrimino, char **map, int map_size)
{
	if (tetrimino == NULL)
		return (1);
	tetrimino->y = 0;
	while (check_bounds_y(tetrimino, map_size))
	{
		while (check_bounds_x(tetrimino, map_size))
		{
			if (check_overlap(tetrimino, map) == 1)
			{
				place_remove_piece(tetrimino, map, tetrimino->ch);
				if (solver(tetrimino->next, map, map_size))
				{
					return (1);
				}
				else
				{
					place_remove_piece(tetrimino, map, '.');
				}
			}
			tetrimino->x++;
		}
		tetrimino->x = 0;
		tetrimino->y++;
	}
	return (0);
}
