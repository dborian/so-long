/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <dedme@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:52:00 by dedme             #+#    #+#             */
/*   Updated: 2025/03/12 05:28:36 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	*ft_strdup(char *str)
{
	char	*buf;
	int		i;

	i = 0;
	buf = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (buf == NULL)
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
	tab = malloc(sizeof(char *) * (ft_chain_calc(str, sep) + 1));
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
