/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:21:42 by dedme             #+#    #+#             */
/*   Updated: 2025/02/21 19:55:09 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int	open_file(char *path_file);
int	get_file_len(char *path_file);
char	*read_file(char *path_file, char *buf, int file_len);
int	ft_strlen(char *str);
int	ft_chain_calc(char *str, char sep);
char	*ft_strdup(char *str);
char	**ft_split(char *str, char sep);
void	ft_spawnpoint(int *inf, char **tab);

#endif