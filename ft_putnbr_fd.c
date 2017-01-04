/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drecours <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 15:47:30 by drecours          #+#    #+#             */
/*   Updated: 2017/01/04 16:33:10 by drecours         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	s;

	if (n == -2147483648)
		write(fd, "-2147483648", 12);
	else if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
	}
	if (n < 10 && n != -2147483648)
		ft_putchar_fd(n + '0', fd);
	if (n > 10)
	{
		ft_putnbr_fd(n / 10, fd);
		s = (n % 10) + 48;
		ft_putchar_fd(s, fd);
	}
}

int		main(void)
{
	ft_putnbr_fd(-214783647, 1);
	return (0);
}
