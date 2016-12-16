/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 15:29:32 by drecours          #+#    #+#             */
/*   Updated: 2016/12/16 04:30:47 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s2;
	int		i;
	int		u;

	u = -1;
	s2 = ft_strdup(s);
	i = ft_strlen(s2);
	while (++u < i)
		f(s2[u]);
	return (s2);
}
