/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:21:42 by dedme             #+#    #+#             */
/*   Updated: 2025/02/27 01:56:52 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <mlx_linux/mlx.h>

# ifndef X
#  define X 0
# endif

# ifndef Y
#  define Y 0
# endif

typedef struct s_map {
	char	*map_name;
	int		height;
	int		widht;
	int		spawnpoint[2];
	int		exit[2];
	int		objs[2];
	char	**maps;
}				t_map;

typedef struct s_text {
	void	*img;
	int		img_width;
	int		img_height;
}				t_text;

typedef struct s_all_text {
	t_text background;
	t_text sprite;
}				t_all_text;

typedef struct	s_data {
	void	*mlx;
	void	*win;
	t_map map_info;
	t_all_text	all_img;
}				t_data;


/**
 * @brief nom
 * 
 * @param path_file
 * 
 */
int		open_file(char *path_file);
int		get_file_len(char *path_file);
char	*read_file(char *path_file, char *buf, int file_len);
int		ft_strlen(char *str);
int		ft_chain_calc(char *str, char sep);
char	*ft_strdup(char *str);
char	**ft_split(char *str, char sep);
void	ft_spawnpoint(int *spawnpoint, char **maps);
int		ft_load_text(t_data *data);
int		close_window(t_data *data);
int		windows_init(t_data *data, int *xy);
int		ft_put_sprite (int *xy, t_data *data);
int		ft_clear_screen(t_data *data);
int		ft_move (int keycode, t_data *data, int *xy);
void	ft_map_read(t_data *data);

#endif