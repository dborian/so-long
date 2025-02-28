/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 00:24:25 by dedme             #+#    #+#             */
/*   Updated: 2025/02/27 21:16:26 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int close_window(t_data *data)
{
	mlx_destroy_image(data->mlx, data->all_img.sprite.img);
	mlx_destroy_image(data->mlx, data->all_img.background.img);
	mlx_destroy_image(data->mlx, data->all_img.wall.img);
    mlx_loop_end(data->mlx);
	return (0);
}

int	windows_init(t_data *data, int *xy)
{
	data->mlx = mlx_init();
	data->win = mlx_new_window(data->mlx, data->map_info.widht * 64, data->map_info.height * 64, "Hello world!");
	ft_load_text(data);
	ft_put_sprite(xy, data);
	return (0);
}