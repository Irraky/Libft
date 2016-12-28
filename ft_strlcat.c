/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 10:34:20 by drecours          #+#    #+#             */
/*   Updated: 2016/12/28 17:06:17 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	tmp;

	i = -1;
	tmp = 0;
	while (dst[i])
		i++;
	i--;
	while (src[tmp] && tmp < size - 1)
	{
		dst[i + tmp] = src[tmp];
		tmp++;
	}
	dst[i + tmp] = '\0';
	return (tmp + i);
}
