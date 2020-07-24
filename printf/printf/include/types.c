/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:35:33 by rmontill          #+#    #+#             */
/*   Updated: 2020/02/11 18:35:36 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		types(t_t *t)
{
	t->i++;
	convertype(t);
	width(t);
	precision(t);
	flagtype(t);
	printtype(t);
	return (t->rv);
}

t_t		*printtype(t_t *t)
{
	char	ident;

	ident = t->flag;
	if (ident == 'd' || ident == 'i')
		inttype(t);
	else if (ident == 's')
		strtype(t);
	else if (ident == 'c')
		chartype(t);
	else if (ident == 'x' || ident == 'X')
		hextype(t);
	else if (ident == 'u')
		uninttype(t);
	else if (ident == 'p')
		ptrtype(t);
	else if (ident == '%')
	{
		t->flag = '%';
		chartype(t);
	}
	return (t);
}