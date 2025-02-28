/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 01:12:39 by dedme             #+#    #+#             */
/*   Updated: 2025/02/27 20:01:03 by dedme            ###   ########.fr       */
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
	char 	*buf;
	int 	file_len;

	buf = NULL;
	file_len = get_file_len(data->map_info.map_name);
	buf = malloc(sizeof(char) * file_len + 1);
	read_file(data->map_info.map_name, buf, file_len - 1);
	printf("buf = %s\n\n", buf);
	ft_map_size(data, buf);
	printf("widht = %d\nheight = %d\n", data->map_info.widht, data->map_info.height);
	data->map_info.maps = ft_split(buf, '\n');
	ft_spawnpoint(&data->map_info.spawnpoint[0], data->map_info.maps);
	printf("x = %d\ny = %d\n", data->map_info.spawnpoint[0], data->map_info.spawnpoint[1]);
}
