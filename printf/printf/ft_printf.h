/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:35:33 by rmontill          #+#    #+#             */
/*   Updated: 2020/02/11 18:35:36 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF.H
# define FT_LIBFT.H

# include <stdarg.h>
# include <libft.h>
# include <stdio.h>

typedef struct s_tab
{
	const char	*str
	int			rv;
	int			i;
	int			precision;
	int			width;
	va_list		ap;
	char		*cpy;
	char		*trat;
	char		*flagtype;
	char		flag;
	char		flag_aux;
	char		*convertype;
	char		conver[5];
}				t_t;

int				ft_printf(const char *str, ...);
t_t				*init(t_t *t);
t_t				*reinit(t_t *t);
t_t				*printprintf(t_t *t);

t_t				*chartype(t_t *t);
t_t				*strtype(t_t *t);
t_t				*inttype(t_t *t);
t_t				*uninttype(t_t *t);
t_t				*hextype(t_t *t);
t_t				*ptrtype(t_t *t);

#endif