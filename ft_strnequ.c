/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 09:28:15 by drecours          #+#    #+#             */
/*   Updated: 2016/12/21 20:34:00 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n)
		i++;
	if (s1[i] == s2[i])
		return (1);
	return (0);
}
