#include <mlx_linux/mlx.h>
#include <stdio.h>

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	int		xy[2];
	int		dxy[2];
	
	xy[0] = 10;
	xy[1] = 10;
	dxy[0] = 0;
	dxy[1] = 0;

	t_data	img;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
	img.img = mlx_new_image(mlx, 1920, 1080);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
								&img.endian);
	while (dxy[0] < 50)
		my_mlx_pixel_put(&img, xy[0] + dxy[0]++, xy[1], 0x00FF0000);
	dxy[0] = 0;
	dxy[1]++;
	while (dxy[1] < 49)
	{
		my_mlx_pixel_put(&img, xy[0], xy[1] + dxy[1], 0x00FF0000);
		my_mlx_pixel_put(&img, xy[0] + 50, xy[1] + dxy[1]++, 0x00FF0000);
	}
	while (dxy[0] < 50)
		my_mlx_pixel_put(&img, xy[0] + dxy[0]++, xy[1] + dxy[1], 0x00FF0000);
	dxy[0] = 0;
	dxy[1] = 0;
	xy[0] += 70;
	while (dxy[0] < 100)
		my_mlx_pixel_put(&img, xy[0] + dxy[0]++, xy[1], 0x00FF0000);
	dxy[0] = 0;
	dxy[1]++;
	while (dxy[1] < 49)
	{
		my_mlx_pixel_put(&img, xy[0], xy[1] + dxy[1], 0x00FF0000);
		my_mlx_pixel_put(&img, xy[0] + 100, xy[1] + dxy[1]++, 0x00FF0000);
	}
	while (dxy[0] < 100)
		my_mlx_pixel_put(&img, xy[0] + dxy[0]++, xy[1] + dxy[1], 0x00FF0000);
	dxy[0] = 0;
	dxy[1] = 0;
	xy[0] += 170;
	while (dxy[0] < 50)
		my_mlx_pixel_put(&img, xy[0] + dxy[0]++, xy[1] + dxy[1]++, 0x00FF0000);
	while (dxy[0] > -50)
		my_mlx_pixel_put(&img, xy[0] + dxy[0]--, xy[1] + dxy[1], 0x00FF0000);
	while (dxy[0] < 0)
		my_mlx_pixel_put(&img, xy[0] + dxy[0]++, xy[1] + dxy[1]--, 0x00FF0000);
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}

