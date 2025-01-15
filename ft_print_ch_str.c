/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:13:52 by tmarcos           #+#    #+#             */
/*   Updated: 2025/01/15 12:03:56 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Implementacoes basicas das funcoes auxiliares
int ft_printchar(char c)
{
    return (write(1, &c, 1));
}

int ft_printstr(const char *str)
{
    int len;
	
	len = 0;
    if (!str)
        str = "(null)";
    while (str[len] != '\0')
        ft_printchar(str[len++]);
    return (len);
}