/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 15:59:53 by rmontill          #+#    #+#             */
/*   Updated: 2019/11/29 16:04:31 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		joinlen;
	int		i;
	int		len1;
	char	*strjoin;

	i = 0;
	if (!s1 || !s2)
		return (0);
	len1 = ft_strlen(s1);
	joinlen = ft_strlen(s2) + ft_strlen(s1) + 1;
	if (!(strjoin = (char *)malloc(sizeof(char) * joinlen)))
		return (NULL);
	while (s1[i])
	{
		strjoin[i] = s1[i];
		i++;
	}
	while (s2[i - len1])
	{
		strjoin[i] = s2[i - len1];
		i++;
	}
	strjoin[i] = '\0';
	return (strjoin);
}
