/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:21:51 by rmontill          #+#    #+#             */
/*   Updated: 2019/11/27 16:37:56 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*newb;
	size_t			i;

	newb = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		newb[i] = (unsigned char)c;
		i++;
	}
	return (newb);
}
