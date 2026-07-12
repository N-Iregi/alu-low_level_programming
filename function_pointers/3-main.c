#include "3-calc.h"

/**
 * main - performs simple operations.
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to characters/strings which are the arguments
 *
 * Return: 0 on success, non-zero if otherwise
 */
int main(int argc, char *argv[])
{
	int num1, num2, calculation;
	char operator;
	int (*op_holder)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_holder = get_op_func(argv[2]);

	if (!op_holder)
	{
		printf("Error\n");
		exit(99);
	}

	operator = *argv[2];
	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calculation = op_holder(num1, num2);
	printf("%d\n", calculation);

	return (0);
}
