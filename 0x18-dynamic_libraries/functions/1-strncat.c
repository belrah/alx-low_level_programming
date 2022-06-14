#include "main.h"
/**
 * _strncat -  concatenates two strings
 * @dest: A pointer to a char
 * @src: A pointer to a char
 * @n: value
 * Copyright © 2022 baccrie
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
	/* Copyright © 2022 baccrie */
}
