/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:23:30 by rmontill          #+#    #+#             */
/*   Updated: 2019/11/26 17:56:11 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = 0;
	if (dst != '\0' || src != '\0')
	{
		if (((unsigned char *)src) < ((unsigned char *)dst))
			while (len-- > 0)
				((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		else
			while (i < len)
			{
				((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
				i++;
			}
		return ((unsigned char *)dst);
	}
	return (NULL);
}
