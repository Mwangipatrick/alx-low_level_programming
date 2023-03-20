#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
 *positive or negative variable
 *Positive anything is better than negative nothing
 *return: 0 always success
 */
int main(void)
{
int n;
srand(time(0))
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n");
}
return (0);
}
