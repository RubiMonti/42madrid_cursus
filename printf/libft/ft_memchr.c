/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:23:44 by rmontill          #+#    #+#             */
/*   Updated: 2019/11/27 16:38:55 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	cchar;
	size_t			i;

	i = 0;
	cchar = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == cchar)
		{
			return (ptr + i);
		}
		else
			i++;
	}
	return (NULL);
}
