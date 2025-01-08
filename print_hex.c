/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarcos <tmarcos@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:58:13 by tmarcos           #+#    #+#             */
/*   Updated: 2025/01/07 19:10:02 by tmarcos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	print_hex_upper(unsigned int n)
// {
// 	char	buffer[9];
// 	char	*base;
// 	int		i;
// 	int		len;

// 	base = "0123456789ABCDEF";
// 	i = 0;
// 	len = 0;
// 	if (n == 0) // Caso especial: número 0
// 		return (print_char('0'));
// 	while (n > 0)
// 	{
// 		buffer[i++] = base[n % 16];
// 		n /= 16;
// 	}
// 	while (--i >= 0)
// 	{
// 		len += print_char(buffer[i]);
// 	}
// 	return (len);
// }
// int	print_hex_lower(unsigned int n)
// {
// 	char	buffer[9]; // Armazena os dígitos do número em hexadecimal (máximo de 8 dígitos)
// 	char	*base = "0123456789abcdef"; // Base para números hexadecimais minúsculos
// 	int		i = 0; // Índice do buffer
// 	int		len = 0; // Contador do número de caracteres impressos

// 	// Caso especial: número 0
// 	if (n == 0)
// 		return (print_char('0')); // Imprime '0' e retorna 1 (número de caracteres impressos)

// 	// Converte o número para hexadecimal
// 	while (n > 0)
// 	{
// 		buffer[i++] = base[n % 16]; // Adiciona o dígito correspondente ao buffer
// 		n /= 16; // Divide o número por 16 para processar o próximo dígito
// 	}

// 	// Imprime os caracteres na ordem inversa
// 	while (--i >= 0)
// 		len += print_char(buffer[i]); // Imprime cada dígito e soma ao total de caracteres

// 	return (len); // Retorna o número total de caracteres impressos
// }
int	print_hex_upper(unsigned int n)
{
	char	*base = "0123456789ABCDEF"; // Mapeamento para valores hexadecimais
	int		len = 0;

	if (n >= 16) // Se ainda há mais dígitos
		len += print_hex_upper(n / 16); // Divide por 16 e processa o próximo dígito

	len += print_char(base[n % 16]); // Imprime o dígito correspondente ao resto da divisão por 16
	return (len);
}
int	print_hex_lower(unsigned int n)
{
	char	*base = "0123456789abcdef"; // Mapeamento para valores hexadecimais minúsculos
	int		len = 0;

	if (n >= 16)
		len += print_hex_lower(n / 16);

	len += print_char(base[n % 16]);
	return (len);
}

int	print_hex(unsigned int n, int uppercase)
{
	if (uppercase) // Se for uppercase, chama a função correspondente
		return (print_hex_upper(n));
	else // Se não, chama a função para lowercase
		return (print_hex_lower(n));
}
int print_pointer(void *ptr)
{
    unsigned long address;
    int len;

    if (!ptr)
        return (print_string("(nil)"));
    len = print_string("0x");
    address = (unsigned long)ptr; // Converte para número inteiro para manipulação
    len += print_hex_lower(address); // Reutiliza função de hexadecimal minúsculo
    return (len);
}


