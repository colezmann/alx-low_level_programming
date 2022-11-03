#include "main.h"
/**
 * substr_cmp - compares substring after wildcard with s1
 * @s1: first string
 * @s2: second string
 * @post_wild: position immediately after wildcard
 * Return: 1 if identical; 0 otherwise
 */
int substr_cmp(char *s1, char *s2, char *post_wild)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' && *s2 == '*')
		return (substr_cmp(s1, s2 + 1, s2 + 1));
	else if (*s1 == '\0' && *s2 != '\0')
		return (0);
	else if (*s2 == '*')
		return (substr_cmp(s1, s2 + 1, s2 + 1));
	else if (*s1 == *s2)
		return (substr_cmp(s1 + 1, s2 + 1, post_wild));
	else
		return (substr_cmp(s1 + 1, post_wild, post_wild));
}


/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if s1 and s2 are identical; 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (substr_cmp(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}
