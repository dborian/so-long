/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 05:41:53 by dedme             #+#    #+#             */
/*   Updated: 2025/03/12 05:48:09 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int				tab[10];
	unsigned int	nbr;

	nbr = nb;
	if (nb == 0)
		ft_putchar(48);
	nb = -1;
	while (nbr != 0)
	{
		tab[++nb] = nbr % 10;
		nbr = nbr / 10;
	}
	while (nb >= 0)
		ft_putchar(tab[nb--] + 48);
	ft_putchar('\n');
}
