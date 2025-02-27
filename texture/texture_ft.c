/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 00:26:25 by dedme             #+#    #+#             */
/*   Updated: 2025/02/27 00:28:14 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_load_text(t_data *data)
{
	data->all_img.background.img = mlx_xpm_file_to_image(data->mlx,\
	"./background/back2.xpm", &data->all_img.background.img_width,\
	&data->all_img.background.img_height);
	data->all_img.sprite.img = mlx_xpm_file_to_image(data->mlx,\
	"./sprites/dino.xpm", &data->all_img.sprite.img_width,\
	&data->all_img.sprite.img_height);
	return (0);
}

