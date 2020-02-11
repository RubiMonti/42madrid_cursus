/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:26:12 by rmontill          #+#    #+#             */
/*   Updated: 2020/01/16 13:47:43 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		c;
	int		sign;
	long	result;

	c = 0;
	sign = 1;
	result = 0;
	if (!str[c])
		return (0);
	while (str[c] == ' ' || str[c] == '\t' || str[c] == '\n'
		|| str[c] == '\f' || str[c] == '\v' || str[c] == '\r')
		c++;
	if (str[c] == '-' || str[c] == '+')
		if (str[c++] == '-')
			sign = -1;
	while (str[c] >= '0' && str[c] <= '9')
		result = (result * 10) + (str[c++] - '0');
	return (result * sign);
}
