/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conguyen <conguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:58:52 by conguyen          #+#    #+#             */
/*   Updated: 2022/01/19 08:31:04 by conguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void	free_list(t_tet *list)
{
	t_tet	*tmp;

	while (list)
	{
		tmp = list;
		list = list->next;
		free(tmp);
	}
}

void	free_array(char **tetsarray, int lines)
{
	while (lines >= 0)
		free(tetsarray[lines--]);
	free(tetsarray);
}

void	free_coords(int	**coords)
{
	free(coords[0]);
	free(coords[1]);
	free(coords[2]);
	free(coords[3]);
	free(coords);
}
