/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:54:13 by dedme             #+#    #+#             */
/*   Updated: 2025/02/28 19:05:21 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_exitpoint(int *exitpoint, char **maps)
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
				exitpoint[0] = x;
				exitpoint[1] = y;
				return ;
			}
			x++;
		}
		x = 0;
		y++;
	}
}

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
			if (maps[y][x] == 'P')
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

void	ft_objpoint(int *objpoint, char **maps)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (maps[y])
	{
		while (maps[y][x])
		{
			if (maps[y][x] == 'C')
			{
				objpoint[0] = x;
				objpoint[1] = y;
				return ;
			}
			x++;
		}
		x = 0;
		y++;
	}
}
