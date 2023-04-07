#include "main.h"

/**
 * checkfunction - checks existence of the square root
 * @n: should have a natural squareroot
 * @msqrt: possible squareroot
 * Return: -1 error  (success)
 * /

int checkFunction(int num, int pSqrt)
{
	if ((mSqrt * mSqrt) == num)
	{
		return (mSqrt);
	}
	else
	{
		if ((mSqrt * mSqrt) > num)
			return (-1);
		else
			return (checkFunction(num, mSqrt + 1));

	}
}

/**
 *  _sqrt_recursion - returns natural squareroot
 *  @n: provides squareroot
 *  Return: 0 success
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (check_function(n, 0));
}
