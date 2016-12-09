/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 15:49:24 by drecours          #+#    #+#             */
/*   Updated: 2016/12/05 12:03:34 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	if (c == '\0')
		return ((char *)(s + ft_strlen(s) + 1));
	i = ft_strlen(s);
	while (i != 0 && s[i] != c)
		i--;
	if (s[i] == c)
		return ((char*)(s + i));
	return (NULL);
}
