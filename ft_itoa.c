/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 04:15:21 by drecours          #+#    #+#             */
/*   Updated: 2016/12/28 18:07:48 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*nb;
	int		i;

	i = ft_ilen(n);
	if (!(nb = (char*)malloc(sizeof(char) * i + 1)))
		return (NULL);
	if (n < 0)
		nb[0] = '-';
	nb[i] = '\0';
	while (n > 0)
	{
		nb[i] = n % 10 + 48;
		i--;
		n = n / 10;
	}
	return (nb);
}
