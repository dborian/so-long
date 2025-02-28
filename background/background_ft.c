/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   background_ft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 00:41:32 by dedme             #+#    #+#             */
/*   Updated: 2025/02/27 22:04:33 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

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
			// printf("map[%d][%d] = %c\n", x, y, data->map_info.maps[y][x]);
			if (data->map_info.maps[y][x] == '0')
			{
				// printf("floor\n");
				mlx_put_image_to_window(data->mlx, data->win, data->all_img.background.img, x * 64, y * 64);
			}
			else if (data->map_info.maps[y][x] == '1')
			{
				// printf("wall\n");
				mlx_put_image_to_window(data->mlx, data->win, data->all_img.wall.img, x * 64, y * 64);
			}
			else if (data->map_info.maps[y][x] == 'E')
			{
				// printf("exit\n");
				mlx_put_image_to_window(data->mlx, data->win, data->all_img.exit.img, x * 64, y * 64);
			}
			x++;
		}
		x = 0;
		y++;
	}
	return (0);
}