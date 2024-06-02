# Doubly Linked List - C Project

This project contains C functions for manipulating doubly linked lists. Below is a brief description of each task and its corresponding file.

## Task 0: Print list
- **File:** [0-print_dlistint.c](./0-print_dlistint.c)
- **Description:** Function to print all the elements of a doubly linked list.
- **Prototype:** `size_t print_dlistint(const dlistint_t *h)`
- **Return:** The number of nodes.

## Task 1: List length
- **File:** [1-dlistint_len.c](./1-dlistint_len.c)
- **Description:** Function to return the number of elements in a doubly linked list.
- **Prototype:** `size_t dlistint_len(const dlistint_t *h)`

## Task 2: Add node
- **File:** [2-add_dnodeint.c](./2-add_dnodeint.c)
- **Description:** Function to add a new node at the beginning of a doubly linked list.
- **Prototype:** `dlistint_t *add_dnodeint(dlistint_t **head, const int n)`
- **Return:** The address of the new element, or NULL if it failed.

## Task 3: Add node at the end
- **File:** [3-add_dnodeint_end.c](./3-add_dnodeint_end.c)
- **Description:** Function to add a new node at the end of a doubly linked list.
- **Prototype:** `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)`
- **Return:** The address of the new element, or NULL if it failed.

## Task 4: Free list
- **File:** [4-free_dlistint.c](./4-free_dlistint.c)
- **Description:** Function to free a doubly linked list.
- **Prototype:** `void free_dlistint(dlistint_t *head)`

## Task 5: Get node at index
- **File:** [5-get_dnodeint.c](./5-get_dnodeint.c)
- **Description:** Function to return the nth node of a doubly linked list.
- **Prototype:** `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)`
- **Return:** The nth node or NULL if it doesn't exist.

## Task 6: Sum list
- **File:** [6-sum_dlistint.c](./6-sum_dlistint.c)
- **Description:** Function to return the sum of all the data (n) of a doubly linked list.
- **Prototype:** `int sum_dlistint(dlistint_t *head)`

## Task 7: Insert at index
- **File:** [7-insert_dnodeint.c](./7-insert_dnodeint.c)
- **Description:** Function to insert a new node at a given position in a doubly linked list.
- **Prototype:** `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)`
- **Return:** The address of the new node, or NULL if it failed.

## Task 8: Delete at index
- **File:** [8-delete_dnodeint.c](./8-delete_dnodeint.c)
- **Description:** Function to delete the node at a given index in a doubly linked list.
- **Prototype:** `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)`
- **Return:** 1 if succeeded, -1 if failed.

## Task 9: Crackme4
- **File:** [100-password](./100-password)
- **Description:** Contains the password for the crackme4 program.

## Task 10: Palindromes
- **File:** [102-result](./102-result)
- **Description:** Contains the largest palindrome made from the product of two 3-digit numbers.

## Task 11: crackme5
- **File:** [103-keygen.c](./103-keygen.c)
- **Description:** Keygen program for crackme5. Generates a valid key for the username.
