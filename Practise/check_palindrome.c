#include <stdio.h>
#include <string.h>

int isPalindrome(char *str)
{
	int i;
	int len = strlen(str) - 1;
	i = 0;

	if (len == 0)
	{
		printf("This is a character\n");
	}

	while (i < len)
	{
		if (str[i] != str[len])
		{
			printf("This is not a palindrome\n");
			return (0);
		}
		i++;
		len--;
	}
	printf("This is a palindrome\n");
}

int main(void)
{
	isPalindrome("racecar");

	return (0);
}
