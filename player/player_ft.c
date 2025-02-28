/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 00:47:21 by dedme             #+#    #+#             */
/*   Updated: 2025/02/27 21:38:00 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int ft_move (int keycode, t_data *data, int *xy)
{
	// printf("%d\n", keycode);
	if (keycode == 65307)
	{
		close_window(data);
		return (0);
	}
	else if (keycode == 65361 && xy[0] != 0)
		xy[0] -= 64;
	else if (keycode == 65362 && xy[1] != 0)
		xy[1] -= 64;
	else if (keycode == 65363 && xy[0] != (data->map_info.widht - 1) * 64)
		xy[0] += 64;
	else if (keycode == 65364 && xy[1] != (data->map_info.height - 1) * 64)
		xy[1] += 64;
	printf("x = %d\ny = %d\n", xy[0], xy[1]);
	ft_put_sprite(xy, data);
	return (0);
}