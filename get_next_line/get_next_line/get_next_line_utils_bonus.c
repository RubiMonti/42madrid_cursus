/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:41:14 by rmontill          #+#    #+#             */
/*   Updated: 2020/02/11 17:41:50 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;
	int		j;

	i = 0;
	while (s1[i])
		i++;
	if (!(s2 = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	j = 0;
	while (s1[j])
	{
		s2[j] = s1[j];
		j++;
	}
	s2[j] = '\0';
	return (s2);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		cont;
	int		i;
	char	*ptr;

	i = 0;
	cont = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[cont] != '\0')
		cont++;
	while (s2[i] != '\0')
	{
		cont++;
		i++;
	}
	if (!(ptr = malloc(cont + 1)))
		return (NULL);
	ft_strlcpy(ptr, s1, cont + 1);
	ft_strlcat(ptr, s2, cont + 1);
	free((void *)s1);
	return (ptr);
}

size_t		ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t		i;
	size_t		j;

	i = 0;
	while (dest[i] != '\0' && i < destsize)
		i++;
	j = i;
	while (i + 1 < destsize && (src[i - j] != '\0'))
	{
		dest[i] = src[i - j];
		i++;
	}
	if (j < destsize)
		dest[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (j + i);
}

size_t		ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t		i;

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
	i = 0;
	while (src[i])
		i++;
	return (i);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*s2;
	unsigned int		i;

	i = 0;
	while (s[i])
		i++;
	if (!(s2 = (char *)malloc(sizeof(char) * len + 1)) || s == NULL)
		return (NULL);
	if (i < start)
	{
		*s2 = '\0';
		return (s2);
	}
	else
		ft_strlcpy(s2, s + start, len + 1);
	return (s2);
}
