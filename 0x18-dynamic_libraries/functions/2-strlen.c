#include <stdio.h>
#include "main.h"
/**
 * _strlen - prints the length of a string
 * @s: a pointer to an array string
 * Task 2 This report, by its very length, defends
 * itself against the risk of being read
 *
 * Copyright © 2022 baccrie
 * Return: string length
 */

int _strlen(char *s)
{
	/* Declaring a variable for the number of the times the program loops */
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
	/* Copyright © 2022 baccrie */
}
