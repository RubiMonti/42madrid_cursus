/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:35:33 by rmontill          #+#    #+#             */
/*   Updated: 2020/02/11 18:35:36 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_t	*init(t_t *t)
{
	t->rv = 0;
	t->i = 0;
	t->pres = -1;
	t->width = 0;
	t->cpy = (char*)t->str;
	t->trat = (char*)t->str;
	t->flagtype = "cspdiuxX%";
	t->convertype = "0-+ ";
	t->flag = 'q';
	t->conver[0] = 'a';
	t->conver[1] = 'a';
	t->conver[2] = 'a';
	t->conver[3] = 'a';
	t->conver[4] = 'a';
	return (t);
}

t_t	*reinit(t_t *t)
{
	t->flag = 'q';
	t->conver[0] = 'a';
	t->conver[1] = 'a';
	t->conver[2] = 'a';
	t->conver[3] = 'a';
	t->conver[4] = 'a';
	t->flag_aux = '\0';
	t->width = 0;
	t->pres = -1;
	return (t);
}