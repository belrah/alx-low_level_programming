#include "main.h"
/**
 *_strcmp -  compares two strings
 *@s1: A pointer to an char that will be updated
 *@s2: A pointer to an char that will be updated
 *Return: dest
 */

int _strcmp(char *s1, char *s2)

{
	int diff;

	if (s1 == s2)
	{
		diff = 0;
	}
	else if (s1[0] == s2[0])
	{
		diff = 0;
	}
	else
	{
		diff = s1[0] - s2[0];
	}
	return (diff);
}
