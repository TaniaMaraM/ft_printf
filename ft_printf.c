/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 20:09:05 by tmarcos           #+#    #+#             */
/*   Updated: 2024/12/27 14:51:52 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	handle_placeholder(char specifier, va_list args)
{
	if (specifier == 'c')
		return (print_char(va_arg(args, int)));
	else if (specifier == 's')
		return (print_string(va_arg(args, char *)));
	else if (specifier == 'd' || specifier == 'i')
		return (print_number(va_arg(args, int)));
	// else if (specifier == 'u')
	// 	return (print_unsigned(va_arg(args, unsigned int)));
	// else if (specifier == 'x' || specifier == 'X')
	// 	return (print_hex(va_arg(args, unsigned int), specifier));
	// else if (specifier == 'p')
	// 	return (print_pointer(va_arg(args, void *)));
	else if (specifier == '%')
		return (print_char ('%'));
	return (0);//checar que so vou retornar -1
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		total_len;

	i = 0;
	total_len = 0;
	if (!format)
		return (-1);
	va_start (args, format); //inicializa a lista de args;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1]) //encontra a %
		{
			total_len += handle_placeholder(format[i + 1], args);
			i++; //pula apos o %;
		}
		else
			total_len += print_char(format[i]);
		i++;
	}
	va_end (args);
	return (total_len);
}
