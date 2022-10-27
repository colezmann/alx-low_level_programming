#include "main.h"
/**
 * *cap_string - capitalizes first letter of all words of a string
 * @s: pointer to input string
 * Return: pointer to capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;
	char spr[] = " \t\n,;.!?\"(){}";

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 'a' + 'A';
	i++;
	while (s[i] != '\0')
	{
		for (j = 0; spr[j] != '\0'; j++)
			if (s[i - 1] == spr[j] && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] = s[i] - 'a' + 'A';
		i++;
	}
	return (s);
}
