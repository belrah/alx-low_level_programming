#include "main.h"
/**
 * _strcat -  concatenates two strings
 * @dest: A pointer to an char
 * @src: A pointer to an char
 * Copyright © 2022 baccrie
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;
	for (i = 0; dest[i]; i++)
	{

	}
	/* variable i now at the last + 1 element of dest */
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
	/* Copyright © 2022 baccrie */
}
