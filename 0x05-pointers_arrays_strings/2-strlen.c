#include "main.h"

/**
* _strlen -retruns the length of a string
* @s: string
* Retrun: retruns length as integer
*/
int _strlen(char *s)
{
	int len = 0;

	while(*(s + len) != '\0')
		len++;
	return (len);
}
