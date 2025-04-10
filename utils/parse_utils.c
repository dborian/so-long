/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:52:00 by dedme             #+#    #+#             */
/*   Updated: 2025/04/08 22:36:35 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	*ft_strdup(char *str)
{
	char	*buf;
	int		i;

	i = 0;
	buf = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!buf)
		return (NULL);
	while (str[i] && str[i] != '\n')
	{
		buf[i] = str[i];
		i++;
	}
	buf[i] = '\0';
	return (buf);
}

char	**ft_split(char *str, char sep)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_chain_calc(str, sep) + 1));
	if (!tab)
		return (NULL);
	tab[j++] = ft_strdup(str);
	i++;
	while (str[i])
	{
		if (str[i - 1] == sep)
			tab[j++] = ft_strdup(&str[i]);
		i++;
	}
	return (tab);
}
