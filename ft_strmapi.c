/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 15:44:20 by drecours          #+#    #+#             */
/*   Updated: 2016/12/12 15:50:11 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	int		i;
	int		u;

	u = -1;
	s2 = strdup(s);
	i = ft_strlen(s2);
	while (++u < i)
		f(u, s2[u]);
	return (s2);
}
