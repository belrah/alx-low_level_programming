#include "main.h"
#include <stdio.h>
/**
 * _strcpy -  copies the string pointed to by src
 * @dest: A pointer to a char
 * @src: A pointer to a char
 * Copyright © 2022 baccrie
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{

	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
	/* Copyright © 2022 baccrie */

}
