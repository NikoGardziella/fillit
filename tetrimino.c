/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrimino.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:10:43 by conguyen          #+#    #+#             */
/*   Updated: 2022/01/19 08:34:04 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

/*
** Moves the 'A's to top left of the 2D array. 
*/

static int	**move_coords(int **coords)
{
	int	s_y;
	int	s_x;
	int	x;

	s_y = coords[0][0];
	s_x = coords[0][1];
	x = 0;
	while (++x < 4)
	{
		if (s_y > coords[x][0])
			s_y = coords[x][0];
		if (s_x > coords[x][1])
			s_x = coords[x][1];
	}
	x = -1;
	while (++x < 4)
	{
		coords[x][0] = coords[x][0] - s_y;
		coords[x][1] = coords[x][1] - s_x;
	}
	return (coords);
}

/*
** '#' is 'A'. Checks for 'A' in tetrimino and 
** saves its coordinates to 2D int array.
*/

static int	**get_coords(char **tetarray, int lines)
{
	int	x;
	int	y;
	int	**coords;
	int	c;

	x = -1;
	coords = (int **)malloc(sizeof(int *) * 4);
	c = 0;
	while (++x < lines)
	{
		y = -1;
		while (tetarray[x][++y] != '\0')
		{
			if (tetarray[x][y] == 'A')
			{
				coords[c] = (int *)malloc(sizeof(int) * 2);
				coords[c][0] = y;
				coords[c][1] = x;
				c++;
			}
		}
	}
	return (move_coords(coords));
}

/*
** adds coordinates of '#' to the linked list. Returns new linked list piece
*/

static t_tet	*add_tetrimino(int **coords, int ch)
{
	t_tet	*newpiece;
	int		x;

	newpiece = (t_tet *)malloc(sizeof(t_tet));
	if (newpiece == NULL)
		return (NULL);
	x = -1;
	newpiece->ch = ch;
	newpiece->next = NULL;
	while (++x < 4)
	{
		newpiece->coords[x][0] = coords[x][0];
		newpiece->coords[x][1] = coords[x][1];
	}
	newpiece->x = 0;
	newpiece->y = 0;
	return (newpiece);
}

/*
** Creates linked lists with coordinates of '#' tetriminos.
** Changes '#' with letter in each tetrimino.
** first if statement is for the head of linked list.
*/

t_tet	*create_list(char **tetarray, int lines, int ch)
{
	t_tet	*tetrimino;
	t_tet	*head;
	int		x;
	int		**coords;

	x = -1;
	while (++x < lines)
	{
		if ((x + 1) % 5 == 0 && x < 5)
		{
			coords = get_coords(&tetarray[x - 4], 4);
			head = add_tetrimino(coords, ch++);
			tetrimino = head;
			free_coords(coords);
		}
		else if ((x + 1) % 5 == 0 && x > 5)
		{
			coords = get_coords(&tetarray[x - 4], 4);
			tetrimino->next = add_tetrimino(coords, ch++);
			tetrimino = tetrimino->next;
			free_coords(coords);
		}
	}
	return (head);
}
