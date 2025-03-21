/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 00:26:25 by dedme             #+#    #+#             */
/*   Updated: 2025/03/21 07:40:15 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_load_text(t_data *data)
{
	data->all_img.background.img = mlx_xpm_file_to_image(data->mlx, \
	"./background/floor.xpm", &data->all_img.background.img_width, \
	&data->all_img.background.img_height);
	data->all_img.sprite.img = mlx_xpm_file_to_image(data->mlx, \
	"./sprites/knight.xpm", &data->all_img.sprite.img_width, \
	&data->all_img.sprite.img_height);
	data->all_img.wall.img = mlx_xpm_file_to_image(data->mlx, \
	"./background/wall.xpm", &data->all_img.background.img_width, \
	&data->all_img.background.img_height);
	data->all_img.exit.img = mlx_xpm_file_to_image(data->mlx, \
	"./background/exit.xpm", &data->all_img.exit.img_width, \
	&data->all_img.exit.img_height);
	data->all_img.obj.img = mlx_xpm_file_to_image(data->mlx, \
	"./background/obj.xpm", &data->all_img.obj.img_width, \
	&data->all_img.obj.img_height);
	data->all_img.mush.img = mlx_xpm_file_to_image(data->mlx, \
	"./background/mushroom.xpm", &data->all_img.obj.img_width, \
	&data->all_img.obj.img_height);
	return (0);
}
