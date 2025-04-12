/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprite_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 00:40:17 by dedme             #+#    #+#             */
/*   Updated: 2025/04/08 22:33:57 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_put_sprite(t_data *data)
{
	ft_clear_screen(data);
	mlx_put_image_to_window(data->mlx, data->win, data->all_img.sprite.img, \
	data->player.xy[0] * 64, data->player.xy[1] * 64);
	return (0);
}
