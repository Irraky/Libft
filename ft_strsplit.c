/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 17:51:31 by drecours          #+#    #+#             */
/*   Updated: 2016/12/28 15:45:02 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_compter_mots(char const *str, char c)
{
	int		i;
	int		mots;

	mots = 0;
	i = 0;
	if (str[i] != c)
		++mots;
	++i;
	while (str[i])
	{
		if (str[i - 1] == c)
			++mots;
		++i;
	}
	return (mots);
}

int		ft_taille(char const *str, int i, char c)
{
	int sheep;

	sheep = 0;
	while (str[i] != c && str[i])
	{
		sheep++;
		i++;
	}
	return (sheep);
}

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
		while (str[i] == c  && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			if ((tab[j] = malloc(sizeof(char) * ft_taille(str, i, c) + 1)) == NULL)
				return (NULL);
			while (str[i] != c && str[i])
				tab[j][k++] = str[i++];
			tab[j++][k] = '\0';
		}
	}
	tab[j] = NULL;
	return (tab);
}
