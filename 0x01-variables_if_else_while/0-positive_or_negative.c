#include <stdlib.h> 
#include <time.h> 

/**
 * main - Entry point
 *
 * Description:  print whether the variable n is positive or negative 
 *
 * Return: 0 if success
 */
int man(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
		printf("n is positive\n") 
	}
	else {
		if (n < 0)
		{
			printf("n is negative\n")
		}
		else 
		{
			printf("n is zero\n")
		}
	return (0)
}
