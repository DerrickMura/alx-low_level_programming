#include "main.h"
/**
 * _is lower -  checkk if char is lowercase
 * @c: is the char to be cecked
 * Return: 1 if char is lowercase, otherwise 0.
 */
int _islower(int c)
{
	if(c>='a'&& c <= 'Z')
		return (1);
	else
		return (0);
}
