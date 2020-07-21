/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:36:59 by dhojt             #+#    #+#             */
/*   Updated: 2018/04/03 13:45:30 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_is_alpha(char *str)
{
	int fail;

	fail = 0;
	while (*str)
	{
		if (!ft_isalpha(*str))
			fail = 1;
		str++;
	}
	return ((fail) ? 0 : 1);
}
