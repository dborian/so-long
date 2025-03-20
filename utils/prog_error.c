/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:36:55 by dedme             #+#    #+#             */
/*   Updated: 2025/03/20 14:37:27 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

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
	return (0);
}
