#include "main.h"
/**
 * _strcpy - Copy the str
 * @dest: Char to check
 * @src: Char to check
 * Return: 0 is success
 */
char *_strcpy(char *dest, char *src)
{
int a;
for (a = 0; src[a] != '\0'; a++)
{
	dest[a] = src[a];
}
dest[a] = '\0';
return (dest);
}
