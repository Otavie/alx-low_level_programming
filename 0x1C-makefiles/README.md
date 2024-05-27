# Makefile and Python Script Project

## 0. Basic Makefile
### Requirements:
- **Executable Name:** `school`
- **Rules:** `all`
  - The `all` rule builds your executable.
- **Variables:** None

**File:** `0-Makefile`

## 1. Makefile with Variables
### Requirements:
- **Executable Name:** `school`
- **Rules:** `all`
  - The `all` rule builds your executable.
- **Variables:** `CC`, `SRC`
  - `CC`: The compiler to be used.
  - `SRC`: The `.c` files.

**File:** `1-Makefile`

## 2. Makefile with Object Files
### Requirements:
- **Executable Name:** `school`
- **Rules:** `all`
  - The `all` rule builds your executable.
- **Variables:** `CC`, `SRC`, `OBJ`, `NAME`
  - `CC`: The compiler to be used.
  - `SRC`: The `.c` files.
  - `OBJ`: The `.o` files.
  - `NAME`: The name of the executable.
- The `all` rule should recompile only the updated source files.
- You are not allowed to have a list of all the `.o` files.

**File:** `2-Makefile`

## 3. Extended Makefile
### Requirements:
- **Executable Name:** `school`
- **Rules:** `all`, `clean`, `oclean`, `fclean`, `re`
  - `all`: Builds your executable.
  - `clean`: Deletes all Emacs and Vim temporary files along with the executable.
  - `oclean`: Deletes the object files.
  - `fclean`: Deletes all Emacs and Vim temporary files, the executable, and the object files.
  - `re`: Forces recompilation of all source files.
- **Variables:** `CC`, `SRC`, `OBJ`, `NAME`, `RM`
  - `CC`: The compiler to be used.
  - `SRC`: The `.c` files.
  - `OBJ`: The `.o` files.
  - `NAME`: The name of the executable.
  - `RM`: The program to delete files.
- The `all` rule should recompile only the updated source files.
- The `clean`, `oclean`, `fclean`, `re` rules should never fail.
- You are not allowed to have a list of all the `.o` files.

**File:** `3-Makefile`

## 4. Complete Makefile
### Requirements:
- **Executable Name:** `school`
- **Rules:** `all`, `clean`, `fclean`, `oclean`, `re`
  - `all`: Builds your executable.
  - `clean`: Deletes all Emacs and Vim temporary files along with the executable.
  - `oclean`: Deletes the object files.
  - `fclean`: Deletes all Emacs and Vim temporary files, the executable, and the object files.
  - `re`: Forces recompilation of all source files.
- **Variables:** `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
  - `CC`: The compiler to be used.
  - `SRC`: The `.c` files.
  - `OBJ`: The `.o` files.
  - `NAME`: The name of the executable.
  - `RM`: The program to delete files.
  - `CFLAGS`: Your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
- The `all` rule should recompile only the updated source files.
- The `clean`, `oclean`, `fclean`, `re` rules should never fail.
- You are not allowed to have a list of all the `.o` files.

**File:** `4-Makefile`

## 5. Island Perimeter
### Technical Interview Preparation:
- You are not allowed to google anything.
- Whiteboard first.
- Create a function `def island_perimeter(grid):` that returns the perimeter of the island described in `grid`.
  - `grid` is a list of list of integers:
    - `0` represents a water zone.
    - `1` represents a land zone.
  - One cell is a square with side length 1.
  - Grid cells are connected horizontally/vertically (not diagonally).
  - Grid is rectangular, width and height don’t exceed 100.
  - Grid is completely surrounded by water, and there is one island (or nothing).
  - The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
### Requirements:
- First line contains `#!/usr/bin/python3`.
- You are not allowed to import any module.
- Module and function must be documented.

**File:** `5-island_perimeter.py`

## 6. Advanced Makefile
### Requirements:
- **Executable Name:** `school`
- **Rules:** `all`, `clean`, `fclean`, `oclean`, `re`
  - `all`: Builds your executable.
  - `clean`: Deletes all Emacs and Vim temporary files along with the executable.
  - `oclean`: Deletes the object files.
  - `fclean`: Deletes all Emacs and Vim temporary files, the executable, and the object files.
  - `re`: Forces recompilation of all source files.
- **Variables:** `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
  - `CC`: The compiler to be used.
  - `SRC`: The `.c` files.
  - `OBJ`: The `.o` files.
  - `NAME`: The name of the executable.
  - `RM`: The program to delete files.
  - `CFLAGS`: Your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
- The `all` rule should recompile only the updated source files.
- The `clean`, `oclean`, `fclean`, `re` rules should never fail.
- You are not allowed to have a list of all the `.o` files.
- You have to use `$(RM)` for the cleaning up rules, but you are not allowed to set the `RM` variable.
- You are not allowed to use the string `$(CC)` more than once in your Makefile.
- You are only allowed to use the string `$(RM)` twice in your Makefile.
- You are not allowed to use the string `$(CFLAGS)` (but the compiler should still use the flags you set in this variable).
- You are not allowed to have an `$(OBJ)` rule.
- You are not allowed to use the `%.o: %.c` rule.
- Your Makefile should work even if there is a file in the folder that has the same name as one of your rules.
- Your Makefile should not compile if the header file `m.h` is missing.

**File:** `100-Makefile`

---

### Date and Author
May 27, 2024
Otavie Okuoyo