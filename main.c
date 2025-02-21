/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 22:37:51 by dedme             #+#    #+#             */
/*   Updated: 2025/02/21 17:20:54 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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

char	*ft_strdup(char *str)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (dup == NULL)
		return (NULL);
	while (str[i] && str[i] != '\n')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char *str, char sep)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(tab) * ft_chain_calc(str, sep) + 1);
	if (tab == NULL)
		return (NULL);
	tab[j++] = ft_strdup(str);
	i++;
	while (str[i])
	{
		if (str[i - 1] == sep)
			tab[j++] = ft_strdup(&str[i]);
		i++;
	}
	free(str);
	return (tab);
}

void	ft_spawnpoint(int *inf, char **tab)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (tab[y])
	{
		printf("tab[%d] = %s\n", y, tab[y]);
		while (tab[y][x])
		{
			printf("tab[%d][%d] = %c\n", y, x, tab[y][x]);
			if (tab[y][x] == 'E')
			{
				inf[0] = x;
				inf[1] = y;
				return ;
			}
			x++;
		}
		x = 0;
		y++;
	}
}

int main(int argc, char **argv)
{
	char 	*buf;
	int 	file_len;
	char	**tab;
	int		i;
	int		inf[4];
	
	if (argc < 2)
		return (0);
	i = 0;
	buf = NULL;
	file_len = get_file_len(argv[1]);
	buf = malloc(sizeof(char) * file_len + 1);
	read_file(argv[1], buf, file_len - 1);
	printf("buf = %s\n\n", buf);
	tab = ft_split(buf, '\n');
	ft_spawnpoint(&inf[0], tab);
	printf("x = %d\ny = %d\n", inf[0], inf[1]);
}