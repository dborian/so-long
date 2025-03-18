/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 01:12:39 by dedme             #+#    #+#             */
/*   Updated: 2025/03/18 11:15:55 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_map_size(t_data *data, char *buf)
{
	int	x;
	int	y;
	int	i;

	x = 0;
	y = 1;
	i = 0;
	while (buf[x] != '\n' && buf[x])
		x++;
	while (buf[i])
	{
		i++;
		if (buf[i] == '\n')
			y++;
	}
	data->map_info.height = y;
	data->map_info.widht = x;
}

int	ft_check(t_data *data)
{
	t_check check;
	int	x;
	int	y;

	x = 0;
	y = 0;
	check.exit = 0;
	check.spawn = 0;
	check.obj = 0;
	while (y < data->map_info.height)
	{
		while (data->map_info.maps[y][x])
		{
			if (data->map_info.maps[y][x] == 'E')
				check.exit = 1;
			else if (data->map_info.maps[y][x] == 'P')
				check.spawn = 1;
			else if (data->map_info.maps[y][x] == 'C')
				check.obj = 1;
			x++;
		}
		x = 0;
		y++;
	}
	if (check.spawn == 0 || check.exit == 0 || check.obj == 0)
		return (1);
	return (0);
}

int	ft_free_map(t_data *data)
{
	int		y;

	y = 0;
	while (y < data->map_info.height)
		free(data->map_info.maps[y++]);
	free(data->map_info.maps);
	return (1);
}

int	ft_map_read(t_data *data)
{
	char	*buf;
	int		file_len;
	
	buf = NULL;
	file_len = get_file_len(data->map_info.map_name);
	buf = malloc(sizeof(char) * file_len + 1);
	if (!buf)
		return (1);
	read_file(data->map_info.map_name, buf, file_len - 1);
	ft_map_size(data, buf);
	data->map_info.maps = ft_split(buf, '\n');
	if (ft_check(data) == 1)
		return(ft_free_map(data));
	ft_spawnpoint(&data->map_info.spawnpoint[0], data->map_info.maps);
	ft_exitpoint(&data->map_info.exitpoint[0], data->map_info.maps);
	ft_objpoint(data);
	return (0);
}
