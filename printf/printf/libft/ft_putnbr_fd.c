/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 16:57:37 by rmontill          #+#    #+#             */
/*   Updated: 2019/12/05 16:55:31 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		num;
	char	print;

	if (n == -2147483648)
	{
		write(fd, "-2", 2);
		num = 147483648;
	}
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			num = n * (-1);
		}
		else
			num = n;
	}
	if (num / 10 != 0)
		ft_putnbr_fd(num / 10, fd);
	print = (num % 10) + 48;
	write(fd, &print, 1);
}
