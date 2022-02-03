/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 08:42:28 by ngardzie          #+#    #+#             */
/*   Updated: 2022/01/19 08:36:10 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <fcntl.h>
# include "../libft/includes/libft.h"
# include <unistd.h>

# include <stdio.h> //delete!

typedef struct s_tet
{
	int				coords[4][2];
	int				ch;
	int				x;
	int				y;
	struct s_tet	*next;
}	t_tet;

/*
** solver.c
*/

int		check_bounds_x(t_tet *tetrimino, int map_size);
int		check_bounds_y(t_tet *tetrimino, int map_size);
void	place_remove_piece(t_tet *tetrimino, char **map, int ch);
int		check_overlap(t_tet *tetrimino, char **map);
int		solver(t_tet *tetrimino, char **map, int map_size);

/*
** read_validate.c
*/

int		read_input(const int fd, t_tet **tetrimino);

/*
** tetrimino.c
*/

t_tet	*create_list(char **tetarray, int lines, int ch);

/*
** free.c
*/

void	free_list(t_tet *list);
void	free_coords(int	**coords);
void	free_array(char **tetsarray, int lines);

/*
** mapping
*/

char	**increment_map(char **map, int map_size);
char	**create_map(int map_size);
int		count_tets(t_tet *tetrimino);
int		highest_sqrt(int count);

#endif
