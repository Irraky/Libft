/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 09:56:26 by drecours          #+#    #+#             */
/*   Updated: 2016/12/05 11:23:26 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*un;
	char	*deux;

	deux = (char*)s2;
	un = (char*)s1;
	i = -1;
	if ((s1 == NULL && s2 == NULL) || n == 0)
		while (++i < n)
			if (un[i] != deux[i])
				return (un[i] - deux[i]);
	return (0);
}
