# 0x0F .C - FUNCTION POINTERS

The directory contains the following tasks:

### 0-print_name.c
Write a function that prints a name.
- Prototype: void print_name(char \*name, void (\*f)(char \*));


### 1-array_iterator.c
A function that executes a function given as a parameter on each element of an array
- Prototype: void array_iterator(int \*array, size_t size, void (\*action)(int));
- where size is the size of the array
- and action is a pointer to the function you need to use

### 2-int_index.c
A function that searches for an integer.
- Prototype: int int_index(int \*array, int size, int (\*cmp)(int));
- where size is the number of elements in the array array
- cmp is a pointer to the function to be used to compare values
- int_index returns the index of the first element for which the cmp function does not return 0
- If no element matches, return -1
- If size <= 0, return -1

### 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h 
A program that performs simple operations.
- You are allowed to use the standard library
- Usage: calc num1 operator num2
- You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int
- operator is one of the following:
	- +: addition
	- -: subtraction
	- \*: multiplication
	- /: division
	- %: modulo
- The program prints the result of the operation, followed by a new line
- You can assume that the result of all operations can be stored in an int
- if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
- if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
- if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100
- This task requires that you create four different files.

### 100-main_opcodes.c
A program that prints the opcodes of its own main function.
- Usage: ./main number_of_bytes
- Output format:
	- the opcodes should be printed in hexadecimal, lowercase
	- each opcode is two char long
	- listing ends with a new line
	- see example
- You are allowed to use printf and atoi
- You have to use atoi to convert the argument to an int
- If the number of argument is not the correct one, print Error, followed by a new line, and exit with the status 1
- If the number of bytes is negative, print Error, followed by a new line, and exit with the status 2
- You do not have to compile with any flags








----------------------------xxxxxxxxxxxxxxxxxxx

### Author:
Otavie Okuoyo

### Date:
March 22 to March 23, 2023
