/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 01:12:39 by dedme             #+#    #+#             */
/*   Updated: 2025/03/12 06:27:36 by dedme            ###   ########.fr       */
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

void	ft_map_read(t_data *data)
{
	char	*buf;
	int		file_len;

	buf = NULL;
	file_len = get_file_len(data->map_info.map_name);
	buf = malloc(sizeof(char) * file_len + 1);
	read_file(data->map_info.map_name, buf, file_len - 1);
	ft_map_size(data, buf);
	data->map_info.maps = ft_split(buf, '\n');
	ft_spawnpoint(&data->map_info.spawnpoint[0], data->map_info.maps);
	ft_exitpoint(&data->map_info.exitpoint[0], data->map_info.maps);
	ft_objpoint(&data->map_info.objpoint[0], data->map_info.maps);
}
