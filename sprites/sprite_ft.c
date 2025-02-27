/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprite_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 00:40:17 by dedme             #+#    #+#             */
/*   Updated: 2025/02/27 00:40:47 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_put_sprite (int *xy, t_data *data)
{
	ft_clear_screen(data);
	mlx_put_image_to_window(data->mlx, data->win, data->all_img.sprite.img, xy[0], xy[1]);
	return (0);
}