/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 16:45:04 by tmarcos           #+#    #+#             */
/*   Updated: 2025/01/07 19:09:06 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	handle_placeholder(char specifier, va_list args);
int	print_string(char *str);
int	print_char(char c);
int	print_number(int n);
int	print_unsigned(unsigned int n);
int	print_hex_upper(unsigned int n);
int	print_hex_lower(unsigned int n);
int	print_hex(unsigned int n, int uppercase);
int print_pointer(void *ptr);

#endif
