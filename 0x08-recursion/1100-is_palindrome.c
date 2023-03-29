#include "main.h"
#include <string.h>

/**
 * is_palindrome_helper - Recursive helper function to check for palindrome
 *
 * @s: The string to be checked
 * @start: The index of the start of the substring to check
 * @end: The index of the end of the substring to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
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

	len = 0;
	if (len <= 1)
		return (1);

	return (is_palindrome_helper(s, 0, len - 1));
}
