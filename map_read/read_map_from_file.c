/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map_from_file.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:48:04 by dedme             #+#    #+#             */
/*   Updated: 2025/02/21 19:48:43 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	open_file(char *path_file)
{
	int	fd;

	fd = open(path_file, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error opening the file\n", 23);
		return (0);
	}
	return (fd);
}

int	get_file_len(char *path_file)
{
	int		nb_read;
	int		fd;
	int		count;
	char	buf [1];

	nb_read = -1;
	count = 0;
	fd = open_file(path_file);
	while (nb_read != 0)
	{
		nb_read = read(fd, buf, 1);
		if (nb_read == -1)
		{
			write (2, "Error can't read the file\n", 26);
			return (0);
		}
		count++;
	}
	close (fd);
	return (count);
}

char	*read_file(char *path_file, char *buf, int file_len)
{
	int	nb_read;
	int	count;
	int	fd;

	nb_read = -1;
	count = 0;
	fd = open_file (path_file);
	if (nb_read != 0)
	{
		nb_read = read(fd, buf, file_len);
		if (nb_read == -1)
		{
			write (2, "Error can't read the file\n", 26);
			return (NULL);
		}
		buf[nb_read] = '\0';
	}
	close (fd);
	return (buf);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

int	ft_chain_calc(char *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == sep)
			count++;
		i++;
	}
	return (count);
}