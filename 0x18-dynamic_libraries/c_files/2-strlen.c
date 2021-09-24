#include "main.h"

/**
 *_strlen - return the length of a str
 *@s: string
 *Return: lenght of a str
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
