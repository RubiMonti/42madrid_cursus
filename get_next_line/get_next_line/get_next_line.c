/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 15:01:25 by rmontill          #+#    #+#             */
/*   Updated: 2020/02/10 17:20:59 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char			*ft_new_line(char *aux, char c)
{
	while (*aux != '\0')
	{
		if (*aux == c)
			return ((char *)aux);
		else
			aux++;
	}
	if (*aux == c)
		return ((char*)aux);
	return (NULL);
}

static char		*ft_delete(char *str)
{
	if (str)
	{
		free(str);
		str = NULL;
	}
	return (str);
}

static int		ft_return(int len, char **line)
{
	if (len < 0)
		return (-1);
	*line = ft_strdup("");
	return (0);
}

static char		*ft_read(int *len, char *aux, char **line)
{
	int		pos;
	char	*change;

	pos = 0;
	while (aux[pos] != '\0' && aux[pos] != '\n')
		pos++;
	if (aux[pos] == '\n')
	{
		*line = ft_substr(aux, 0, pos);
		change = ft_strdup(aux + (pos + 1));
		free(aux);
		aux = change;
		if (aux[0] == '\0')
			aux = ft_delete(aux);
		*len = 1;
	}
	else
	{
		*line = ft_strdup(aux);
		free(aux);
		aux = NULL;
		*len = 0;
	}
	return (aux);
}

int				get_next_line(int fd, char **line)
{
	int			len;
	static char	*aux[4096];
	char		*buff;

	if (BUFFER_SIZE < 1 || fd < 0 || line == NULL)
		return (-1);
	if (!(buff = malloc(sizeof(char *) * (BUFFER_SIZE + 1))))
		return (-1);
	while ((len = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[len] = '\0';
		if (aux[fd] == NULL)
			aux[fd] = ft_strdup(buff);
		else
			aux[fd] = ft_strjoin(aux[fd], buff);
		if (ft_new_line(aux[fd], '\n'))
			break ;
	}
	free(buff);
	if (len < 0 || (len == 0 && aux[fd] == NULL))
		return (ft_return(len, line));
	aux[fd] = ft_read(&len, aux[fd], line);
	return (len);
}
