/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 17:51:31 by drecours          #+#    #+#             */
/*   Updated: 2017/01/04 20:04:01 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *str, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	if ((tab = malloc(sizeof(char*) * (ft_compter_mots(str, c) + 1))) == NULL)
		return (NULL);
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			if ((tab[j] = malloc(sizeof(char) * ft_taille(str, i, c) + 1))
					== NULL)
				return (NULL);
			ft_strncpy(tab[j], str, ft_taille(str, i, c));
			tab[j++][k] = '\0';
			i = i + ft_taille(str, i, c);
		}
	}
	tab[j] = NULL;
	return (tab);
}
