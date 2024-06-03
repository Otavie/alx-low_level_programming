# 0x1A. C - Hash tables

This repository contains C functions to create, manipulate, and delete hash tables.

## Files

### 0-hash_table_create.c

This file contains a function `hash_table_create` that creates a hash table of a specified size.

```c
hash_table_t *hash_table_create(unsigned long int size);
```

### 1-djb2.c

This file implements the `djb2` hash function.

```c
unsigned long int hash_djb2(const unsigned char *str);
```

### 2-key_index.c

This file contains a function `key_index` that returns the index at which a key-value pair should be stored in the hash table's array.

```c
unsigned long int key_index(const unsigned char *key, unsigned long int size);
```

### 3-hash_table_set.c

This file contains a function `hash_table_set` that adds an element to the hash table.

```c
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
```

### 4-hash_table_get.c

This file contains a function `hash_table_get` that retrieves a value associated with a key from the hash table.

```c
char *hash_table_get(const hash_table_t *ht, const char *key);
```

### 5-hash_table_print.c

This file contains a function `hash_table_print` that prints the contents of the hash table.

```c
void hash_table_print(const hash_table_t *ht);
```

### 6-hash_table_delete.c

This file contains a function `hash_table_delete` that deletes a hash table.

```c
void hash_table_delete(hash_table_t *ht);
```

### 100-sorted_hash_table.c

This file implements a sorted hash table, inspired by the behavior of PHP hash tables.

## Usage

To use these functions, simply include the desired header files in your C code and link them with the corresponding object files.

## Author

Created by Otavie Okuoyo
