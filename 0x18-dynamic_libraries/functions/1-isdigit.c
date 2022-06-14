#include "main.h"
/**
 * _isdigit - check if c is digit
 * @c: print int
 * copyright © baccrie 2022
 * Return: (1) or (0)
 */

int _isdigit(int c)
{
	/* The main function that will be used to test c is a character */
	/* which means we need to use ascii to convert c from int to char */
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	/* Copyright © 2022 baccrie */
}
