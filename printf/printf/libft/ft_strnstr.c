/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:26:03 by rmontill          #+#    #+#             */
/*   Updated: 2019/11/26 17:57:15 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, int len)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (haystack[i] && i < len)
	{
		while ((haystack[i + j] == needle[j]) && needle[j] && ((i + j) < len))
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		j = 0;
		i++;
	}
	if (!needle[0])
		return ((char *)&haystack[i]);
	return (NULL);
}
