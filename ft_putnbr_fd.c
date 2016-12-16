/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 15:47:30 by drecours          #+#    #+#             */
/*   Updated: 2016/12/16 05:06:56 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		tmp;

	tmp = 0;
	if (n == -2147483648 || n == 0)
		(n == 0) ? write(fd, "0", 1) : write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		n = n * -1;
		ft_putchar_fd('-', fd);
	}
	while (n > 0)
	{
		tmp = tmp * 10 + n % 10;
		n = n / 10;
	}
	while (tmp > 0)
	{
		ft_putchar_fd(((tmp % 10) + '0'), fd);
		tmp = tmp / 10;
	}
}
