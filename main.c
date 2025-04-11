/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:43:09 by dedme             #+#    #+#             */
/*   Updated: 2025/04/12 00:28:38 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	free_mlx(t_data *data)
{
	if (data->error != 6)
	{
		mlx_destroy_display(data->mlx);
		free(data->mlx);
	}
	return (data->error);
}

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc != 2)
		return (error_write_return(1, &data));
	data.player.obj = 0;
	data.player.mouv_count = 0;
	data.map_info.map_name = argv[1];
	if (ft_map_read(&data) != 0)
		return (data.error);
	data.player.xy[0] = data.map_info.spawnpoint[0];
	data.player.xy[1] = data.map_info.spawnpoint[1];
	if (windows_init(&data) != 0)
		return (free_mlx(&data));
	mlx_hook(data.win, 2, 1L << 0, ft_move, &data);
	mlx_hook(data.win, 17, 0, close_window, &data);
	mlx_loop(data.mlx);
	mlx_destroy_window(data.mlx, data.win);
	mlx_destroy_display(data.mlx);
	free(data.mlx);
	return (0);
}
