#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to be found
 * UPDATE V1.0: Features: Pointers implementation instead or arrays
 * Pointers/memory incrementation instead of i
 * Return: pointer to s or null
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}

	return (0);
}
