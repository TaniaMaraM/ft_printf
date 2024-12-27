/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 14:49:27 by tmarcos           #+#    #+#             */
/*   Updated: 2024/12/27 17:34:04 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_number(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (print_string("-2147483648"));
	if (n < 0)
	{
		n = -n;
		len += print_char('-');
	}
	if (n >= 10)
	{
		len += print_char (n / 10);
		len += print_char ('0' + (n % 10));
	}
	return (len);
}

int	print_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
	{
		len += print_unsigned (n / 10);
		len += print_char ('0' + (n % 10));
	}
	return (len);
}

int	print_number_base(unsigned int n, const char *base)
{
	int	base_len;
	int	len;

	base_len = 0;
	len = 0;
	while (base[base_len])
		base_len++;
	if (n >= (unsigned int)base_len)
	{
		len += print_number_base (n / base_len, base);
		len += print_char (base [n % base_len]);
	}
	return (len);



}

