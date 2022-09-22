#include "main.h"

/**
* _strcat - concatinates the string pointed to by @src to
* to the end of string pointed by @dest
* @dest: string that will be appended
* @src: string to be concatinated up on
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

