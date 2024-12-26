/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 20:09:05 by tmarcos           #+#    #+#             */
/*   Updated: 2024/12/23 15:54:14 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	handle_placeholder (char specifier, va_list args)
{
	if (specifier == 'c')
	return (ft_putchar(va_arg(args, int))); 
	return (0);
	
}

int	ft_printf(const char *format, ...)
{
	va_list_args;
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	if (!format)
	return (-1); //verifica se o ponteiro eh valido
	va_start (args, format); //inicializa a lista de args;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1]) //encontra a %
		{
			total_len += handle_placeholder(format[i + 1], args);
			i++; //pula apos o %;
		}
		else
		total_len += ft_putchar(format[i]);
		i++;
	}
	va_end (args);
	return (total_len);
}
