/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 09:49:48 by dedme             #+#    #+#             */
/*   Updated: 2025/04/10 03:20:49 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int	ft_check_case(t_data *data, t_check *check, char **map)
{
	int		xy[2];

	xy[0] = 0;
	xy[1] = 0;
	while (xy[1] < data->map_info.height)
	{
		while (map[xy[1]][xy[0]])
		{
			if (map[xy[1]][xy[0]] == 'E')
				check->exit = 1;
			else if (map[xy[1]][xy[0]] == 'P')
				check->spawn = 1;
			else if (map[xy[1]][xy[0]] == 'C')
				check->obj = 1;
			else if (map[xy[1]][xy[0]] != '0' && map[xy[1]][xy[0]] != '1')
				return (1);
			xy[0]++;
		}
		xy[0] = 0;
		xy[1]++;
	}
	if (check->spawn != 1 || check->exit != 1 || check->obj != 1)
		return (1);
	return (0);
}

static int	ft_check_lenght(t_data *data)
{
	int	y;

	y = 0;
	while (y < data->map_info.height)
		if (ft_strlen(data->map_info.maps[y++]) != data->map_info.widht)
			return (1);
	return (0);
}

static int	ft_check_wall(t_data *data)
{
	int	y;
	int	i;

	i = 0;
	y = 1;
	while (y < data->map_info.height)
	{
		if (data->map_info.maps[y][data->map_info.widht - 1] != '1' || \
			data->map_info.maps[y][0] != '1')
			return (1);
		y++;
	}
	while (data->map_info.maps[0][i])
		if (data->map_info.maps[0][i++] != '1')
			return (1);
	i = 0;
	while (data->map_info.maps[data->map_info.height - 1][i])
		if (data->map_info.maps[data->map_info.height - 1][i++] != '1')
			return (1);
	return (0);
}

static int	ft_check_ber(char *str)
{
	int		i;
	int		j;
	char	*set;

	set = "ber";
	i = 0;
	j = 0;
	while (str[i] != '.')
		i++;
	i++;
	while (set[j])
	{
		if (str[i] != set[j] || str[i] == 0)
		{
			return (1);
		}
		i++;
		j++;
	}
	return (0);
}

int	ft_check(t_data *data)
{
	t_check	check;

	check.spawn = 0;
	check.exit = 0;
	check.obj = 0;
	if (!data->map_info.maps)
		return (1);
	else if (ft_check_lenght(data) == 1)
		return (1);
	else if (ft_check_case(data, &check, data->map_info.maps) == 1)
		return (1);
	else if (ft_check_wall(data) == 1)
		return (1);
	else if (ft_check_ber(data->map_info.map_name) == 1)
		return (1);
	return (0);
}
