/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 09:48:07 by drecours          #+#    #+#             */
/*   Updated: 2016/12/05 11:22:13 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*entree;
	char	*sortie;

	entree = (char*)src;
	sortie = (char*)dest;
	i = -1;
	if (n == 0)
		return (NULL);
	if (src == dest)
		return (dest);
	while (++i != n && entree[i] != c)
		entree[i] = sortie[i];
	if (entree[i] == c)
		return (dest + i + 1);
	return (NULL);
}