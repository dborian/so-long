/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 00:47:21 by dedme             #+#    #+#             */
/*   Updated: 2025/03/12 07:14:57 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	ft_choose_move(int keycode, t_data *data)
{
	if (keycode == 97 && data->player.xy[0] != 0 && \
		data->map_info.maps[data->player.xy[1]][data->player.xy[0] - 1] != '1')
		data->player.xy[0]--;
	else if (keycode == 119 && data->player.xy[1] != 0 && \
		data->map_info.maps[data->player.xy[1] - 1][data->player.xy[0]] != '1')
		data->player.xy[1]--;
	else if (keycode == 100 && data->player.xy[0] * 64 \
		!= (data->map_info.widht - 1) * 64 && \
			data->map_info.maps[data->player.xy[1]] \
				[data->player.xy[0] + 1] != '1')
		data->player.xy[0]++;
	else if (keycode == 115 && data->player.xy[1] * 64 \
		!= (data->map_info.height - 1) * 64 && \
			data->map_info.maps[data->player.xy[1] + 1] \
				[data->player.xy[0]] != '1')
		data->player.xy[1]++;
	else
		return (1);
	return (0);
}

int	ft_move(int keycode, t_data *data)
{
	if (keycode == 65307)
	{
		close_window(data);
		return (0);
	}
	else if (keycode != 97 && keycode != 119 && \
		keycode != 100 && keycode != 115)
		return (0);
	if (ft_choose_move(keycode, data) == 1)
		return (0);
	ft_putnbr(++data->player.mouv_count);
	if (data->map_info.maps[data->player.xy[1]][data->player.xy[0]] == 'C')
		data->player.obj = 1;
	ft_put_sprite(data);
	if (data->map_info.maps[data->player.xy[1]][data->player.xy[0]] == 'E' && \
		data->player.obj == 1)
	{
		close_window(data);
		write(1, "SUCCESS GG\n", 11);
	}
	return (0);
}
