/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:26:12 by rmontill          #+#    #+#             */
/*   Updated: 2019/11/07 16:26:15 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int 	ft_atoi(const char *str)
{
	int c;
	int sign;
	int result;

	result = 0;
	c = 0;
	sign = 1;
	while (str[c] == '\t' || str[c] == '\n' || str[c] == '\v' || str[c] == '\f'
		   	|| str[c] == '\r' || str[c] == ' ')
	{
		c++;
	}
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			sign = sign * (-1);
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		result = result * 10 + (str[c] - '0');
		c++;
	}
	return (result * (sign));
}
