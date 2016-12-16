/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:16:02 by drecours          #+#    #+#             */
/*   Updated: 2016/12/12 16:33:42 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*copie;

	i = 0;
	j = ft_strlen(s);
	while (s[i] == '\t' || s[i] == ' ' || s[i] == '\n')
		i++;
	while ((s[j] == '\t' || s[j] == ' ' || s[j] == '\n') && &s[i] != &s[j])
		j--;
	if (&s[i] == &s[j])
	{
		copie = "";
		return (copie);
	}
	if (!(copie = (char *)malloc(sizeof(char) * (j - i) + 1)))
		return (NULL);
	j = -1;
	while (copie[++j])
		copie[j] = s[i + j];
	return (copie);
}
