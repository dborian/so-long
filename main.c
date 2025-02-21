/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 22:37:51 by dedme             #+#    #+#             */
/*   Updated: 2025/02/21 19:54:47 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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