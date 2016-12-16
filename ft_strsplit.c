/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:35:36 by drecours          #+#    #+#             */
/*   Updated: 2016/12/16 04:30:31 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		mots;
	int		i;
	int		j;
	char	**tableau;

	i = -1;
	while (s[++i] == c)
		;
	mots = (s[i] != '\0') ? 1 : 0;
	while (s[++i])
		while (s[++i - 1] == c)
			mots = (s[i] != c && s[i] != '\0') ? mots + 1 : mots;
	if (!(tableau = (char **)malloc(sizeof(char*) * mots)))
		return (NULL);
	mots = 0;
	while (s[++i])
		if (s[i] != c)
		{
			j = i;
			while (s[i] != c)
				i++;
			tableau[mots] = ft_strsub(s, j, i - j - 1);
			mots++;
		}
	return (tableau);
}
