/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 00:26:25 by dedme             #+#    #+#             */
/*   Updated: 2025/04/11 04:12:38 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int	verif_text(t_all_text *text)
{
	if (!text->background.img)
		return (1);
	else if (!text->exit.img)
		return (1);
	else if (!text->mush.img)
		return (1);
	else if (!text->wall.img)
		return (1);
	else if (!text->obj.img)
		return (1);
	else if (!text->sprite.img)
		return (1);
	return (0);
}

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
	if (verif_text(&data->all_img) == 1)
		return (1);
	return (0);
}
