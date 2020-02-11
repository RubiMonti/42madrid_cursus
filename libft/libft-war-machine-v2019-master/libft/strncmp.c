/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:24:55 by rmontill          #+#    #+#             */
/*   Updated: 2019/11/07 16:24:56 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
    unsigned int i;
    unsigned char *x;
    unsigned char *y;

    x = (unsigned char *)s1;
    y = (unsigned char *)s2;
    i = 0;
    while (i < n && (s1[i] || s2[i]))
     {
        if (x[i] == y[i])
        {
            i++;
        }
        else 
        {
            return (x[i] - y[i]);
        }
    }
    return (0);
}
