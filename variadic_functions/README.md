C - Variadic functions

Description
This project demonstrates the usage of C variadic functions, which allow the creation of functions that can accept a variable number of arguments. It includes examples of how to implement and use variadic functions effectively in C programs.

Examples
The project provides the following examples of variadic functions:

sum_them_all: A function that returns the sum of a variable number of integer arguments.
print_strings: A function that prints a variable number of strings.
print_numbers: A function that prints a variable number of integers.
You can find these functions implemented in the variadic_functions.c file and examples of how to use them in the main.c file.

Key Features
The key feature that enables variadic functions in C is the <stdarg.h> header, which provides a set of macros to access the variable arguments within the function. The most important macros in this header are:

va_list: This is a special type used to declare a list of variable arguments. It serves as a handle to access the arguments.

va_start: This macro initializes the va_list to point to the first variable argument. It takes two arguments: the va_list itself and the last fixed argument before the variable arguments.

va_arg: This macro retrieves the next argument from the variable argument list based on its type. It takes two arguments: the va_list and the type of the argument to be retrieved.

va_end: This macro is used to clean up the va_list after all the variable arguments have been accessed. It takes the va_list as its argument.

Variadic functions are commonly used in scenarios where the number of arguments cannot be predetermined or when dealing with functions like printf, which can take a variable number of format specifiers and corresponding arguments.

However, it's important to note that using variadic functions requires extra caution since the compiler cannot perform type checking on the variable arguments. Developers should ensure that they pass the correct number and types of arguments based on the function's specific requirements.
