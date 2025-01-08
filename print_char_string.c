/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:14:02 by tmarcos           #+#    #+#             */
/*   Updated: 2025/01/07 19:10:07 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c)
{
	return (write(1, &c, 1));
}

int	print_string(char *str)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		len += print_char(str[i]);
		i++;
	}
	return (len);
}

