#include "libftprintf.h"

int	main(void)
{
    ft_printf("Hello, world!\n");
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "42 Berlin");
    ft_printf("Percent sign: %%\n");
    ft_printf("Invalid: %q\n");
    return (0);
}
