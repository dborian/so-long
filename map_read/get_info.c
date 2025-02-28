/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:54:13 by dedme             #+#    #+#             */
/*   Updated: 2025/02/27 19:52:39 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_spawnpoint(int *spawnpoint, char **maps)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (maps[y])
	{
		while (maps[y][x])
		{
			if (maps[y][x] == 'E')
			{
				spawnpoint[0] = x;
				spawnpoint[1] = y;
				return ;
			}
			x++;
		}
		x = 0;
		y++;
	}
}
