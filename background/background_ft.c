/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   background_ft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 00:41:32 by dedme             #+#    #+#             */
/*   Updated: 2025/03/18 06:16:53 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int	ft_choose_img(t_data *data, int x, int y)
{
	if (data->map_info.maps[y][x] == '0' || data->map_info.maps[y][x] == 'P')
		mlx_put_image_to_window(data->mlx, data->win, \
			data->all_img.background.img, x * 64, y * 64);
	else if (data->map_info.maps[y][x] == '1')
		mlx_put_image_to_window(data->mlx, data->win, \
			data->all_img.wall.img, x * 64, y * 64);
	else if (data->map_info.maps[y][x] == 'E')
		mlx_put_image_to_window(data->mlx, data->win, \
			data->all_img.exit.img, x * 64, y * 64);
	else if (data->map_info.maps[y][x] == 'C')
		mlx_put_image_to_window(data->mlx, data->win, \
			data->all_img.obj.img, x * 64, y * 64);
	return (0);
}

int	ft_clear_screen(t_data *data)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < data->map_info.height)
	{
		while (x < data->map_info.widht)
		{
			ft_choose_img(data, x, y);
			x++;
		}
		x = 0;
		y++;
	}
	return (0);
}
