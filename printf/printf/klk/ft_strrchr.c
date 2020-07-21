/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:48:18 by rmontill          #+#    #+#             */
/*   Updated: 2019/11/26 16:16:00 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int j;

	i = ft_strlen(s);
	j = 0;
	while (i >= j)
	{
		if (s[i - j] == c)
		{
			return ((char *)&s[i - j]);
		}
		j++;
	}
	return (NULL);
}
