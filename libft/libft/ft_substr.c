/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 15:37:17 by rmontill          #+#    #+#             */
/*   Updated: 2020/01/16 13:04:22 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	if (!(s2 = (char *)malloc(sizeof(char) * len + 1)) || s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		*s2 = '\0';
		return (s2);
	}
	else
		ft_strlcpy(s2, s + start, len + 1);
	return (s2);
}
