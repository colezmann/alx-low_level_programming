#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: string to be located
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	if (needle[0] == '\0')
		return (haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			k = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[k] == needle[j])
					k++, j++;
				else
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
		i++;
	}
	return ('\0');
}
