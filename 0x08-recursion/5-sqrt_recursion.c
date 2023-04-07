#include "main.h"
/**
  *checkFunction - checks if sqrt of number exists
  *@num: number.
  *@pSqrt: possible sqrt of number.
  *
  *Return: sqrt of number of -1 for error.
  */
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
  *_sqrt_recursion - returns  natural square root.
  *@n: number to use to find sqrt.
  *Return: squareroot of n.
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (checkFunction(n, 0));
}
