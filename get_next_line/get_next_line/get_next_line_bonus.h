/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:37:18 by rmontill          #+#    #+#             */
/*   Updated: 2020/02/11 17:48:08 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

int			get_next_line(int fd, char **line);
char		*ft_strdup(const char *s1);
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcat(char *dest, const char *src, size_t destsize);
size_t		ft_strlcpy(char *dest, const char *src, size_t destsize);
char		*ft_substr(char const *s, unsigned int start, size_t len);

#endif
