/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:25:08 by rmontill          #+#    #+#             */
/*   Updated: 2019/11/27 16:34:10 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t i;

	i = 0;
	if (!dest || !src)
		return (0);
	while (1 < (destsize - i) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (destsize > 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}
