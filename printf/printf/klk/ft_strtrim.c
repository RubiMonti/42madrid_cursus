/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 17:00:03 by rmontill          #+#    #+#             */
/*   Updated: 2020/01/15 13:47:06 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_search(char c, const char *set)
{
	int k;
	int len_set;

	k = 0;
	len_set = ft_strlen(set);
	while (k < len_set)
	{
		if (c == set[k])
			return (1);
		k++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	size_t		len;
	char		*toreturn;

	i = 0;
	j = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	while (ft_search(s1[i], set))
		i++;
	while (len > 0 && ft_search(s1[len - 1], set))
		len--;
	if (len < i)
		len = i;
	toreturn = (char*)malloc(sizeof(char) * (len - i + 1));
	if (!toreturn)
		return (NULL);
	while (i < len)
		toreturn[j++] = (char)s1[i++];
	toreturn[j] = '\0';
	return (toreturn);
}
