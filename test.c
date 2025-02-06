#include "ft_printf.h"
#include <stdio.h>


int main(void)
{
    // Testando caracteres
    ft_printf("=== TESTANDO CARACTERES ===\n");
    ft_printf("ft_printf: Single character: %c\n", 'A');
    printf("printf   : Single character: %c\n", 'A');
    ft_printf("ft_printf: Non-printable character: %c\n", '\n');
    printf("printf   : Non-printable character: %c\n", '\n');
    ft_printf("ft_printf: Edge case (null character): %c\n", '\0');
    printf("printf   : Edge case (null character): %c\n", '\0');

    // Testando strings
    ft_printf("\n=== TESTANDO STRINGS ===\n");
    ft_printf("ft_printf: Basic string: %s\n", "42 Berlin");
    printf("printf   : Basic string: %s\n", "42 Berlin");
    ft_printf("ft_printf: Empty string: %s\n", "");
    printf("printf   : Empty string: %s\n", "");
    // ft_printf("ft_printf: Null string: %s\n", (char *)NULL);
    // printf("printf: Null string: %s\n", (char *)NULL);

    // Testando porcentagem
    ft_printf("\n=== TESTANDO PORCENTAGEM ===\n");
    ft_printf("ft_printf: Single percent sign: %%\n");
    printf("printf   : Single percent sign: %%\n");

    // Testando inteiros
    ft_printf("\n=== TESTANDO INTEIROS ===\n");
    ft_printf("ft_printf: Positive integer: %i\n", 12345);
    printf("printf   : Positive integer: %i\n", 12345);
    ft_printf("ft_printf: Maximum integer: %i\n", 2147483647);
    printf("printf   : Maximum integer: %i\n", 2147483647);
   // Teste do menor inteiro (minimum integer)
    ft_printf("ft_printf: Minimum integer: %d\n", (int)-2147483648);
    printf("printf   : Minimum integer: %d\n", (int)-2147483648);

    // Testando unsigned
    ft_printf("\n=== TESTANDO UNSIGNED ===\n");
    ft_printf("ft_printf: Maximum unsigned: %u\n", 4294967295U);
    printf("printf   : Maximum unsigned: %u\n", 4294967295U);

    // Testando hexadecimal (lowercase e uppercase)
    ft_printf("\n=== TESTANDO HEXADECIMAL (lowercase e uppercase) ===\n");
    ft_printf("ft_printf: Lowercase: %x\n", 3735928559U);
    printf("printf   : Lowercase: %x\n", 3735928559U);
    ft_printf("ft_printf: Uppercase: %X\n", 3735928559U);
    printf("printf   : Uppercase: %X\n", 3735928559U);

    // Testando ponteiros
    ft_printf("=== TESTANDO PONTEIRO NULO ===\n");
    ft_printf("ft_printf: Null pointer: [%p]\n", (void *)NULL);
    printf("printf   : Null pointer: [%p]\n", (void *)NULL);
    ft_printf("\n=== TESTANDO POINTERS ===\n");
    int num = 42;
    void *ptr = &num;
    ft_printf("ft_printf: Pointer to int: %p\n", ptr);
    printf("printf   : Pointer to int: %p\n", ptr);

    // Testando combinações e séries de conversões idênticas
    ft_printf("\n=== TESTANDO COMBINAÇÕES ===\n");
    ft_printf("ft_printf: Mixed: %c %s %d %X\n", 'A', "42", 123, 3735928559U);
    printf("printf   : Mixed: %c %s %d %X\n", 'A', "42", 123, 3735928559U);

    // Testando edge cases
    ft_printf("\n=== TESTANDO EDGE CASES ===\n");
    ft_printf("ft_printf: Very large unsigned: %u\n", 4294967295U + 1U);
    printf("printf   : Very large unsigned: %u\n", 4294967295U + 1U);

    return (0);
}

