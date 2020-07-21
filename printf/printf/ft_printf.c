/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmontill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:35:28 by rmontill          #+#    #+#             */
/*   Updated: 2020/02/11 18:35:29 by rmontill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int   ft_printf(const char* fmt, ...)
{
    //sacar el formato
    s_printf    p;
    ft_bzero(&p, sizeof(p)); //Inicializamos la tabla a 0
    p.fd = 1;
    p.format = (char *)fmt;
    va_start(p.ap, fmt);
    while (*p.format && p.len > -1)
    {
        if (*p.format == '%')
        {
            ++p.format;
            if (!*p.format || (*p.format == ' ' && (!p.format[1]
            || (!p.format[2] && p.format[1] == 'h'))))
                break;
            else
                parse_optionals(&p);
        }
        else if (++p.i)
            buffer(&p, &*p.format, 1);
        ++p.format;
    }
    (p.len < 0) ? write(p.fd, p.buff, p.buffer_index - p.i)
        : write(p.fd, p.buff, p.buffer_index);
        va_end(p.ap);
        return(p.len);
}