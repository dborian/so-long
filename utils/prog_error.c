/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:36:55 by dedme             #+#    #+#             */
/*   Updated: 2025/04/12 00:59:32 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int	error_write_return2(int error_code, t_data *data)
{
	if (error_code == 5)
	{
		write(1, "Error\ncan not access asset\n", 28);
		data->error = 5;
		return (5);
	}
	else if (error_code == 6 || error_code == 7)
	{
		write(1, "Error\nmlx malfunction\n", 23);
		data->error = error_code;
		return (6);
	}
	return (0);
}

int	error_write_return(int error_code, t_data *data)
{
	if (error_code == 1)
	{
		write(1, "Error\ntoo much argument\n", 24);
		return (1);
	}
	else if (error_code == 2)
	{
		write(1, "Error\ncan not open file\n", 24);
		data->error = 2;
		return (2);
	}
	else if (error_code == 3)
	{
		write(1, "Error\nmalloc malfunction\n", 25);
		data->error = 3;
		return (3);
	}
	else if (error_code == 4)
	{
		write(1, "Error\nmap wrong\n", 16);
		data->error = 4;
		return (4);
	}
	return (error_write_return2(error_code, data));
}
