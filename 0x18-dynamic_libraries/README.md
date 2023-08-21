# DYNAMIC LIBRARY AND SCRIPT REPOSITORY

Welcome to the Dynamic Library and Script repository! This repository contains tasks related to creating dynamic libraries, interfacing with Python, and exploring code injection techniques. Here's a breakdown of the tasks and files included in this repository:

## Tasks

### Task 0: A library is not a luxury but one of the necessities of life
**Mandatory**
Create a dynamic library named `libdynamic.so` that includes various functions. If any functions are not implemented, create empty ones with the correct prototype. Don't forget to include the function prototypes in the `main.h` file.

Functions included:
- `_putchar`
- `_islower`
- `_isalpha`
- `_abs`
- `_isupper`
- `_isdigit`
- `_strlen`
- `_puts`
- `_strcpy`
- `_atoi`
- `_strcat`
- `_strncat`
- `_strncpy`
- `_strcmp`
- `_memset`
- `_memcpy`
- `_strchr`
- `_strspn`
- `_strpbrk`
- `_strstr`

Files:
- `libdynamic.so`
- `main.h`

### Task 1: Without libraries what have we?
**Mandatory**
Create a shell script `1-create_dynamic_lib.sh` that generates a dynamic library `liball.so` from all the `.c` files in the current directory.

File:
- `1-create_dynamic_lib.sh`

### Task 2: Let's call C functions from Python
**Advanced**
Create a dynamic library named `100-operations.so` that contains C functions callable from Python. This task is aimed at improving the Python-C interaction.

File:
- `100-operations.so`

### Task 3: Code injection: Win the Giga Millions!
**Advanced**
Can you make the protagonist win the Giga Millions Jackpot through code injection? There are specific conditions to follow while creating a shell script to achieve this.

You are given:
- A copy of the program `gm`
- Documentation on restrictions and context for execution
- A shell script named `101-make_me_win.sh` to be uploaded by a mole and executed by MSS

File:
- `101-make_me_win.sh`

## Instructions

1. Clone this repository using the following command:
   ```
   git clone https://github.com/Otavie/alx-low_level_programming.git
   ```

2. Navigate to the repository directory:
   ```
   cd dynamic-library-repo
   ```

3. Follow the instructions in each task to complete the requirements.

## Author

This repository was created by [Otavie Okuoyo](https://github.com/Otavie).

Feel free to explore the tasks, complete them, and have fun learning!

**Disclaimer:** This repository is for educational purposes and adheres to ethical coding practices. The tasks involving code injection should not be used for malicious intent and should be used responsibly.
