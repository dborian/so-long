/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:52:00 by dedme             #+#    #+#             */
/*   Updated: 2025/04/11 04:14:09 by dedme            ###   ########.fr       */
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

static char	**ft_simple_free(char **tab)
{
	free(tab);
	return (NULL);
}

static char	**ft_free(char **tab, int j)
{
	while (j - 1 >= 0)
		free(tab[j-- - 1]);
	free(tab);
	return (NULL);
}

char	**ft_split(char *str, char sep)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (ft_chain_calc(str, sep) + 1));
	if (!tab)
		return (NULL);
	tab[j++] = ft_strdup(str);
	if (!tab[j - 1])
		return (ft_simple_free(&tab[0]));
	i++;
	while (str[i])
	{
		if (str[i - 1] == sep)
		{
			tab[j++] = ft_strdup(&str[i]);
			if (!tab[j - 1])
				return (ft_free(&tab[0], j));
		}
		i++;
	}
	return (tab);
}
