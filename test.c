#include "libftprintf.h"

int	main(void)
{
    ft_printf("Hello, world!\n");
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "42 Berlin");
    ft_printf("Percent sign: %%\n");
    ft_printf("Invalid: %q\n");
    // Testando inteiros
	ft_printf("Integer: %d\n", -12345);
	// Testando inteiros não assinados
	ft_printf("Unsigned integer: %u\n", 4294967295);
	// // Testando hexadecimal
	// ft_printf("Hexadecimal (lowercase): %x\n", 255);
	// ft_printf("Hexadecimal (uppercase): %X\n", 255);
	// // Testando ponteiros (endereço de memória)
	// int var = 42;
	// ft_printf("Pointer address: %p\n", &var);
	// Testando comportamento com especificador inválido

    return (0);
}

