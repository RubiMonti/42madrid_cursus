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

typedef struct s_printf
{
    short       f;
    int         len;
    int         min_length;
    int         precision;
    int         printed;
    int         fd;
    va_list     ap;
    char        *format;
    int         i;
};
#endif