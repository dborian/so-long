/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:43:09 by dedme             #+#    #+#             */
/*   Updated: 2025/02/27 21:27:23 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int	argc, char **argv)
{
	t_data	data;
	static int		xy[2];

	if (argc != 2)
		return (1);
	data.map_info.map_name = argv[1];
	ft_map_read(&data);
	windows_init(&data, xy);
	mlx_hook(data.win, 2, 1L<<0, ft_move, &data);
	mlx_hook(data.win, 17, 0, close_window, &data);
	mlx_loop(data.mlx);
	mlx_destroy_window(data.mlx, data.win);
	mlx_destroy_display(data.mlx);
	free(data.mlx);
    return (0);
}
