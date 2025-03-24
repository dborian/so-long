/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 00:24:25 by dedme             #+#    #+#             */
/*   Updated: 2025/03/24 19:22:14 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void destroy_text(t_data *data)
{
	mlx_destroy_image(data->mlx, data->all_img.sprite.img);
	mlx_destroy_image(data->mlx, data->all_img.background.img);
	mlx_destroy_image(data->mlx, data->all_img.wall.img);
	mlx_destroy_image(data->mlx, data->all_img.obj.img);
	mlx_destroy_image(data->mlx, data->all_img.exit.img);
	mlx_destroy_image(data->mlx, data->all_img.mush.img);
}

int	close_window(t_data *data)
{
	int	y;

	y = 0;
	destroy_text(data);
	mlx_loop_end(data->mlx);
	while (y < data->map_info.height)
	{
		free(data->map_info.maps_copy[y]);
		free(data->map_info.maps[y++]);
	}
	free(data->map_info.maps);
	free(data->map_info.maps_copy);
	return (0);
}

int	windows_init(t_data *data)
{
	data->mlx = mlx_init();
	if (ft_load_text(data) == 1)
	{
		destroy_text(data);
		return (ft_free_map(5, data));
	}
	data->win = mlx_new_window(data->mlx, data->map_info.widht * 64, \
		data->map_info.height * 64, "Hello world!");
	ft_put_sprite(data);
	return (0);
}
