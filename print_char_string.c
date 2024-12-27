/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions_sc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:14:02 by tmarcos           #+#    #+#             */
/*   Updated: 2024/12/26 17:27:53 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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

