/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 10:52:44 by drecours          #+#    #+#             */
/*   Updated: 2016/12/23 14:28:53 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_mots(char const *s, char c)
{
	int		n;

	if (*s == '\0')
		return (0);
	n = 0;
	n = (*s == c) ? 0 : 1;
	while (*++s)
		if (*s != c && *(s - 1) == c)
			n++;
	return (n);
}

char	**ft_strsplit(char const *s, char c)
{
	int		truc;
	int		i;
	char	**tableau;

	if(!s || !*s)
		return (NULL);
	i = ft_mots(s, c);
	if (!(tableau = (char **)malloc(sizeof(char*) * i)))
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c && *(s - 1) == c)
		{
			truc = 0;
			while (*(s + truc) != c)
				truc++;
			if (!(tableau[i] = ft_strsub(s, 0, truc)))
				return (NULL);
			s += truc;
			i++;
		}
		s++;
	}
	return (tableau);
}

int		main(void)
{
	char	**tableau = ft_strsplit("    5\niri b", ' ');
	int		i;

	i = -1;
	while (tableau[++i])
		printf("%s", tableau[i]);
	return (0);
}
