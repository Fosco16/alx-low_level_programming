#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: pointerpointed to the variable s, of type character
 * Return: Pointer P, pointed to the variable s of type char.
 * Update V2.0 : using pointers instead of arrays to minimize the use
 * of alocated memory and to improve the esthetic ans simplicity of the code.
 */
char *rot13(char *s)
{
	int i;
	char *p = s;

	char *original = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*s != '\0')
	{
		i = 0;
		while (i < 53)
		{
			if (*s == original[i])
			{
				*s = code[i];
				break;
			}
			i++;
		}
		s++;
	}
	return (p);
}
