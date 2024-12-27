/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 16:45:04 by tmarcos           #+#    #+#             */
/*   Updated: 2024/12/27 17:31:12 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

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
int	print_number_base(unsigned int n, const char *base);

#endif
