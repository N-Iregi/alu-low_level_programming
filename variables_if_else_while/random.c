#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void main()
{
	srand(time(NULL)); /* seed changes every second */
	printf("%d\n", rand());          // random number 0 to RAND_MAX
	printf("%d\n", rand() % 100);   // random number 0 to 99
	printf("%d\n", rand() % 6 + 1); // simulate dice roll (1 to 6)
}
