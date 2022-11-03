#include "main.h"
/**
 * cmp - compare start and end indices of a string
 * @start: start index of string, counting left to right
 * @end: end index of string, counting right to left
 * Return: 1 if palindrome, 0 otherwise
 */
int cmp(char *start, char *end)
{
	if (start >= end)
		return (1);
	if (*start == *end)
		return (cmp(start + 1, end - 1));
	return (0);
}
/**
 * _strlen - determines length of a string
 * @s: string
 * Return: length of s
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + (_strlen(s)));
}
/**
 * is_palindrome - checks if a string s is a palindrome
 * @s: string to be checked
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (cmp(s, (s + len - 1)));
}
