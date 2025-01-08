/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 14:49:27 by tmarcos           #+#    #+#             */
/*   Updated: 2025/01/07 19:09:57 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_number(int n)
{
	char	buffer[11];// Máximo para um int (-2147483648 tem 11 caracteres)
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (n == -2147483648)
		return (print_string("-2147483648"));
	if (n < 0)
	{
		len += print_char('-');
		n = -n;
	}
	// Armazena os dígitos no buffer
	while (n > 0 || i == 0) // Tratar o caso de n == 0
	{
		buffer[i++] = '0' + (n % 10);
		n /= 10;
	}
	// Imprime os dígitos do final para o começo
	while (--i >= 0)
		len += print_char(buffer[i]);
	return (len);
}

int	print_unsigned(unsigned int n)
{
	char	buffer[10]; // Máximo para um unsigned int
	int		i;
	int		len;

	i = 0;
	len = 0;
	// Armazena os dígitos no buffer
	while (n > 0 || i == 0) // Tratar o caso de n == 0
	{
		buffer[i++] = '0' + (n % 10);
		n /= 10;
	}
	// Imprime os dígitos do final para o começo
	while (--i >= 0)
		len += print_char(buffer[i]);
	return (len);
}

// int	print_number(int n)
// {
// 	int	len;

// 	len = 0;
// 	if (n == -2147483648)
// 		return (print_string("-2147483648"));
// 	if (n < 0)
// 	{
// 		len += print_char('-');
// 		n = -n; 
// 	}
// 	if (n >= 10)
// 	{
// 		len += print_char (n / 10);
// 		len += print_char ('0' + (n % 10));
// 	}
// 	return (len);
// }

// int	print_unsigned(unsigned int n)
// {
// 	int	len;

// 	len = 0;
// 	if (n >= 10)
// 	{
// 		len += print_unsigned (n / 10);
// 	len += print_char ('0' + (n % 10));
// 	}
// return (len);
// }

// int	print_number_base(unsigned int n, const char *base)
// {
// 	int	base_len;
// 	int	len;

// 	base_len = 0;
// 	len = 0;
// 	while (base[base_len])
// 		base_len++;
// 	if (n >= (unsigned int)base_len)
// 	//{
// 		len += print_number_base (n / base_len, base);
// 		len += print_char (base [n % base_len]);
// 		return (len);
// //	}	
// }

