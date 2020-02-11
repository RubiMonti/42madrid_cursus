/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:54:04 by rmontill          #+#    #+#             */
/*   Updated: 2019/11/07 15:54:08 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	if (!(c >= 'A' && c <= 'Z'))
	{
		if (!(c >= 'a' && c <= 'z'))
			return (0);
	}
	return (1);
}
