#include <stdio.h>
#include <cstdlib.h>

/**
 * main - Entry point
 * Description: This program will assign a random number
 * to the variable n each time it is executed
 *
 * Return: 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX;

if (n > 0)
	printf("%d is positive\n"
, n);
else if (n == 0)
	printf("%d is zero\n"
, n);
else
	printf("%d is negative\n", n);

return (0);
}