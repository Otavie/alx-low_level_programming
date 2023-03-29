#include "main.h"

/**
 * str_len - get the length of string recursively
 *
 * @s: String
 *
 * Return: Length of s
 */
int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + str_len(s + 1));
}

/**
 * is_palindrome_helper - Check if string is palindrome recursively
 *
 * @s: String to be checked
 * @len: Length of the string
 * @i: Index
 *
 * Return: 1 if palindrome, otherwise 0
 */
int is_palindrome_helper(char *s, int len, int i)
{
	if (i >= len / 2)
		return (1);
	else if (s[i] != s[len - i - 1])
		return (0);
	else
		return (is_palindrome_helper(s, len, i + 1));
}

/**
 * is_palindrome - Check if a string is a palindrome
 *
 * @s: The string to be checked
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = str_len(s);
	if (len <= 1)
		return (1);

	return (is_palindrome_helper(s, len, 0));
}
