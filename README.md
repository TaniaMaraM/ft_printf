![ft_printf Badge](https://github.com/ayogun/42-project-badges/blob/main/badges/ft_printfe.png?raw=true)

# ft_printf

## About
This project is a custom implementation of the `printf` function in C, part of the 42 coding curriculum. The goal was to recreate the behavior of the standard `printf` function by handling a variety of format specifiers and argument types, implementing it from scratch with proper memory management and error handling.

## Variadic Functions in C

### What are they?
Variadic functions are functions that accept a variable number of arguments. This is useful when you don’t know exactly how many values will be passed to the function.

### How do they work?
They use the `<stdarg.h>` header, which provides macros to handle the variable arguments.

- **`va_list`**: Declares the list of arguments.
- **`va_start`**: Initializes the list, indicating the last fixed argument.
- **`va_arg`**: Retrieves each argument.
- **`va_end`**: Finalizes the list.

You can check the implementation in `ft_printf.c` to see how it works.

## What was implemented
- A custom version of the `printf` function that supports different format specifiers such as:
  - `c` : character
  - `s` : string
  - `p` : pointer
  - `d` : integer
  - `i` : integer
  - `u` : unsigned integer
  - `x` : hexadecimal (lowercase)
  - `X` : hexadecimal (uppercase)
  - `%` : percent sign
- Custom memory management for handling arguments and buffers.
- Error handling and edge cases (like printing `NULL` for strings).

## File structure
- [`ft_print_ch_str.c`](ft_print_ch_str.c): Function to print characters and strings.
- [`ft_print_iuptr.c`](ft_print_iuptr.c): Function to print integers, unsigned integers, and pointers.
- [`ft_printf.c`](ft_printf.c): Main function implementing `ft_printf`, which processes the format string and handles the specifiers.
- [`ft_printf.h`](ft_printf.h): Header file containing function prototypes.
- [`Makefile`](Makefile): The file used to compile the project.
- [`test.c`](test.c): A file used to test the functionality of `ft_printf`.

## Functions
- **`ft_printf`**: The main function that processes the format string and handles different specifiers.
- **`ft_putchar`**: Writes a character to standard output.
- **`ft_putnbr`**: Writes an integer to standard output.
- **`ft_putstr`**: Writes a string to standard output.
- **`ft_puthex`**: Writes a hexadecimal number to standard output.
- **`ft_putpointer`**: Writes a pointer address to standard output.

## Tester
This repository includes a tester, allowing you to easily test your code and check if it handles the various edge cases and formatting correctly. Enjoy testing!

![Build Status](https://img.shields.io/badge/build-passing-brightgreen)
