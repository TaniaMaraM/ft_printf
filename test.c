#include "ft_printf.h"

int	main(void)
{
    // Testando caracteres
    ft_printf("=== TESTANDO CARACTERES ===\n");
    ft_printf("Single character: %c\n", 'A');
    ft_printf("Non-printable character: %c\n", '\n');
    ft_printf("Edge case (null character): %c\n", '\0'); // Pode ser um caso especial

    // Testando strings
    ft_printf("\n=== TESTANDO STRINGS ===\n");
    ft_printf("Basic string: %s\n", "42 Berlin");
    ft_printf("Empty string: %s\n", "");
    ft_printf("Null string: %s\n", NULL); // Deve tratar corretamente caso seja NULL

    // Testando porcentagem
    ft_printf("\n=== TESTANDO PORCENTAGEM ===\n");
    ft_printf("Single percent sign: %%\n");
    ft_printf("Percent in a sentence: Testing %% sign\n");

    // Testando inteiros
    ft_printf("\n=== TESTANDO INTEIROS ===\n");
    ft_printf("Zero: %d\n", 0);
    ft_printf("Positive integer: %d\n", 12345);
    ft_printf("Negative integer: %d\n", -12345);
    ft_printf("Maximum integer: %d\n", 2147483647);
    ft_printf("Minimum integer: %d\n", -2147483648);

    // Testando inteiros não assinados
    ft_printf("\n=== TESTANDO UNSIGNED ===\n");
    ft_printf("Zero: %u\n", 0);
    ft_printf("Small unsigned: %u\n", 12345);
    ft_printf("Maximum unsigned: %u\n", 4294967295);

    // Testando hexadecimal (lowercase)
    ft_printf("\n=== TESTANDO HEXADECIMAL (lowercase) ===\n");
    ft_printf("Zero: %x\n", 0);
    ft_printf("Small hex: %x\n", 42);
    ft_printf("Large hex: %x\n", 3735928559); // DeadBeef
    ft_printf("Maximum unsigned int: %x\n", 4294967295);

    // Testando hexadecimal (uppercase)
    ft_printf("\n=== TESTANDO HEXADECIMAL (uppercase) ===\n");
    ft_printf("Zero: %X\n", 0);
    ft_printf("Small hex: %X\n", 42);
    ft_printf("Large hex: %X\n", 3735928559); // DEADBEEF
    ft_printf("Maximum unsigned int: %X\n", 4294967295);

    // Testando ponteiros
    ft_printf("\n=== TESTANDO POINTERS ===\n");
    int num = 42;
    void *ptr = &num;
    ft_printf("Pointer to int: %p\n", ptr);
    ft_printf("Null pointer: %p\n", NULL);

    // Testando combinações
    ft_printf("\n=== TESTANDO COMBINAÇÕES ===\n");
    ft_printf("Character, string, and integer: %c %s %d\n", 'A', "42", 123);
    ft_printf("Hex, unsigned, and pointer: %x %u %p\n", 3735928559, 4294967295, &num);

    // Edge cases
    ft_printf("\n=== TESTANDO EDGE CASES ===\n");
    ft_printf("Invalid specifier: %q\n"); // Não deve imprimir nada ou tratar erro
    // ft_printf("Overflow test: %d\n", 2147483647 + 1); // Pode causar comportamento indefinido
    ft_printf("Underflow test: %d\n", -2147483648 - 1); // Pode causar comportamento indefinido
    ft_printf("Very large unsigned: %u\n", 4294967295 + 1);
    return (0);
}

// int	main(void)
// {
//     // Testes básicos de funcionalidade
//     ft_printf("Hello, world!\n");
//     ft_printf("Character: %c\n", 'A');
//     ft_printf("String: %s\n", "42 Berlin");
//     ft_printf("Percent sign: %%\n");
//     ft_printf("Invalid specifier: %q\n"); // Não deve imprimir nada

//     // Testando inteiros
//     ft_printf("Integer (positive): %d\n", 15);
//     ft_printf("Integer (negative): %d\n", -2147483648);
//     ft_printf("Integer (max value): %d\n", 2147483647);
//     ft_printf("Integer: %d\n", -2147488);

//     // Testando inteiros não assinados
//     ft_printf("Unsigned integer (max value): %u\n", 4294967295);
//     ft_printf("Unsigned integer (zero): %u\n", 0);
//     ft_printf("Unsigned integer: %u\n", 123456789);

//     // Testando hexadecimal (lowercase)
//     ft_printf("Hexadecimal (lowercase, small number): %x\n", 15);
//     ft_printf("Hexadecimal (lowercase, zero): %x\n", 0);
//     ft_printf("Hexadecimal (lowercase, max unsigned int): %x\n", 4294967295);
//     ft_printf("Hexadecimal (lowercase, random): %x\n", 3735928559); // DeadBeef

//     // Testando hexadecimal (uppercase)
//     ft_printf("Hexadecimal (uppercase, small number): %X\n", 15);
//     ft_printf("Hexadecimal (uppercase, zero): %X\n", 0);
//     ft_printf("Hexadecimal (uppercase, max unsigned int): %X\n", 4294967295);
//     ft_printf("Hexadecimal (uppercase, random): %X\n", 3735928559); // DEADBEEF
// // Testando ponteiros
//     int x = 42;
//     int *ptr = &x;
//     void *null_ptr = NULL;

//     ft_printf("Pointer (valid): %p\n", ptr);          // Endereço de memória de ptr
//     ft_printf("Pointer (null): %p\n", null_ptr);      // Deve imprimir "(nil)"
//     ft_printf("Pointer (zero cast): %p\n", (void *)0); // Deve imprimir "(nil)"
//     ft_printf("Pointer (random address): %p\n", (void *)0xDEADBEEF); // Endereço arbitrário

//     // Testando edge cases
//     ft_printf("Pointer (max address): %p\n", (void *)-1);  // Endereço máximo em sistemas de 64 bits
//     ft_printf("Pointer (zero): %p\n", (void *)0);          // Null pointer
//     ft_printf("Pointer (stack variable): %p\n", &x);       // Endereço de variável stack
//     ft_printf("Pointer (pointer to pointer): %p\n", &ptr); // Endereço de ponteiro

//     return (0);
// }


