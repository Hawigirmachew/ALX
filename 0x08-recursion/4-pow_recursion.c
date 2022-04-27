#include "main.h"
/**
* _pow_recursion - calulates the power of function of given number
* @x: takes integer
* @y: takes integer
* Return: returns the power function of number
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0 || y == 1)
return (1);
return (x * _pow_recursion(x, y-1));
}