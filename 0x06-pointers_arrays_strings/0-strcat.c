#include "main.h"

/**
* _strcat - concatenates the string pointed by @src to
* the end of the string pointed to by @dest
* @dest: strings that will be appended
* @src: strings to be concatenated upon
*
* Return: returns pointer @dest
*/

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

