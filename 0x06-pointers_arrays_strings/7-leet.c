#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: string
 */
char *leet(char *s)
{
	int i, j;

	int l[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int n[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; l[j] != '\0'; j++)
			if (l[j] == s[i])
				s[i] = n[j];
	return (s);
}
