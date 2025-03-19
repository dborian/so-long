/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:43:09 by dedme             #+#    #+#             */
/*   Updated: 2025/03/19 11:12:52 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc != 2)
		return (1);
	data.player.obj = 0;
	data.player.mouv_count = 0;
	data.map_info.map_name = argv[1];
	if (ft_map_read(&data) == 1)
	{
		write(1, "ERROR\nMAP WRONG\n", 17);
		return (1);
	}
	data.player.xy[0] = data.map_info.spawnpoint[0];
	data.player.xy[1] = data.map_info.spawnpoint[1];
	windows_init(&data);
	mlx_hook(data.win, 2, 1L << 0, ft_move, &data);
	mlx_hook(data.win, 17, 0, close_window, &data);
	mlx_loop(data.mlx);
	mlx_destroy_window(data.mlx, data.win);
	mlx_destroy_display(data.mlx);
	free(data.mlx);
	return (0);
}
