#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * first - My entry point
 * Description: it applys the constructor attribute to the first()
 * so that it is executed before main()
 */
void first(void) __attribute__ ((constructor));

/**
 * first - the entry point b
 * Description: a sentence is printed before the main function execution
 */
void first(void)
{
	printf("You're beat! and yet, you must allow\n");
	printf("I bore my house upon my back!\n");
}
