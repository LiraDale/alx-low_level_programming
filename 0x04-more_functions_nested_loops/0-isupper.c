#include "main.h"
/**
  * _isupper - uppercase letters
  * @c: char to check
  * Return: Always 0 or 1
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 91)
		return (1);
	else
		return (0);
}
