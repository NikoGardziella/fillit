/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:30:42 by ngardzie          #+#    #+#             */
/*   Updated: 2022/01/19 08:44:09 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "includes/fillit.h"
#include <fcntl.h>

/*
** checks if there pieces can be placed on a map. if not,
** it will increase the size of the map and try again.
*/

void	start_solve(t_tet *tetrimino)
{
	int		count;
	int		map_size;
	char	**map;
	int		i;

	i = 0;
	count = count_tets(tetrimino);
	map_size = highest_sqrt(count);
	map = create_map(map_size);
	while (solver(tetrimino, map, map_size) == 0)
	{
		map_size++;
		map = increment_map(map, map_size);
	}
	while (i < map_size)
	{
		ft_putstr(map[i]);
		ft_putchar('\n');
		i++;
	}
}

/*
** Start of the programme
*/

int	main(int argc, char **argv)
{
	int		fd;
	t_tet	*tetrimino;
	t_tet	*head;

	if (argc != 2)
		ft_putstr("Usage: ./fillit 'filename'\n");
	if (argc != 2)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("error\n");
		return (1);
	}
	if (read_input(fd, &tetrimino) == 1)
	{
		head = tetrimino;
		start_solve(tetrimino);
		free_list(head);
	}
	else
		ft_putstr("error\n");
	return (0);
}
