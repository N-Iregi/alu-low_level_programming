#include "main.h"

/**
 * stringcheck - check if two strings are identical.
 * @s1: string_1 base address.
 * @s2: string_2 base address.
 * @x: left index.
 * @y: special index. (joker)
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int stringcheck(char *s1, char *s2, int x, int y)
{
	if (s1[x] == '\0' && s2[y] == '\0')
		return (1);
	if (s1[x] == s2[y])
		return (stringcheck(s1, s2, x + 1, y + 1));
	if (s1[x] == '\0' && s2[y] == '*')
		return (stringcheck(s1, s2, x, y + 1));
	if (s2[y] == '*')
		return (stringcheck(s1, s2, x + 1, y) || stringcheck(s1, s2, x, y + 1));
	return (0);
}
/**
 * wildcmp - check if strings could be considered identical
 * @s1: base address for string.
 * @s2: base address for string.
 *
 * Return: 1 if are considered identical.
 */
int wildcmp(char *s1, char *s2)
{
	return (stringcheck(s1, s2, 0, 0));
}
