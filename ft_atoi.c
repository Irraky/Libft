/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 15:15:57 by drecours          #+#    #+#             */
/*   Updated: 2016/12/23 15:16:28 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		sign;
	int		result;

	result = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
			|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		sign = (*str == '-') ? -1 : 1;
		str++;
	}
	while (*str <= '9' && *str >= '0')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return ((sign < 0) ? (-result) : (result));
}
