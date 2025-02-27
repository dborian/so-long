/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   background_ft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 00:41:32 by dedme             #+#    #+#             */
/*   Updated: 2025/02/27 00:41:44 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_clear_screen(t_data *data)
{
	mlx_put_image_to_window(data->mlx, data->win, data->all_img.background.img, 0, 0);
	return (0);
}