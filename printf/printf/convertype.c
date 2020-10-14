/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertype.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:35:33 by rmontill          #+#    #+#             */
/*   Updated: 2020/02/11 18:35:36 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_t		*convertype(t_t *t)
{
	size_t	j;

	j = 0;
	while (t->convertype[j] != '\0')
	{
		while (t->convertype[j] == t->trat[t->i])
		{
			while (t->trat[t->i] == '-' && t->i++)
				t->conver[0] = '-';
			while (t->trat[t->i] == '+' && t->i++)
				t->conver[1] = '+';
			while (t->trat[t->i] == ' ' && t->i++)
				t->conver[3] = ' ';
			while (t->trat[t->i] == '0' && t->i++)
				t->conver[2] = '0';
			while (t->trat[t->i] == '#' && t->i++)
				t->conver[4] = '#';
			j = 0;
		}
		j++;
	}
	return (t);
}
