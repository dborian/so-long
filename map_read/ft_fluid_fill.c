/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fluid_fill.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 07:22:52 by dedme             #+#    #+#             */
/*   Updated: 2025/03/21 11:14:36 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	fluid_fill(char **map, t_check *check, int x, int y)
{
	if (map[y][x] == '1')
		return ;
	else if (map[y][x] == 'C')
		check->obj++;
	else if (map[y][x] == 'E')
		check->exit++;
	map[y][x] = '1';
	fluid_fill(map, check, x + 1, y);
	fluid_fill(map, check, x, y + 1);
	fluid_fill(map, check, x - 1, y);
	fluid_fill(map, check, x, y - 1);
	return ;
}

int	ft_fluid_fill(t_data *data)
{
	t_check	check;
	char	**map;

	map = data->map_info.maps_copy;
	check.exit = 0;
	check.obj = 0;
	check.spawn = 0;
	fluid_fill(map, &check, data->map_info.spawnpoint[0], \
		data->map_info.spawnpoint[1]);
	if (check.exit != 1 || check.obj != data->player.obj)
		return (1);
	return (0);
}
