/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 10:52:44 by drecours          #+#    #+#             */
/*   Updated: 2016/12/23 17:31:01 by drecours         ###   ########.fr       */
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
			while (*(s + truc) != c && *(s + truc))
				truc++;
			if (!(tableau[i] = ft_strsub(s, 0, truc)))
				return (NULL);
			s += truc;
			i++;
		}
		s++;
	}
	tableau[i] = NULL;
	return (tableau);
}

int		main(void)
{
	char	**tableau = ft_strsplit("dvb    5\niri bifb  po", ' ');
	int		i;

	i = 0;
	while (tableau[i])
	{
		ft_putendl("0_0");
		printf("%s", tableau[i]);
		ft_putendl("0_1");
		i++;
	}
	return (0);
}
