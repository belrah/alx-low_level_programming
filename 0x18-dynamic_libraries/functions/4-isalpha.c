#include "main.h"

/**
 * _isalpha - checks for alphabetic
 * character
 * @c: the integer to use in the func
 * Copyright 2022 © baccrie
 * Return: 1 (if letter) else return 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	/* Copyright 2022 © baccrie */
}
