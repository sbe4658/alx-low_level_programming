#include "3-calc.h"
/**
 * main - the main function.
 * @argc: is the size of argv.
 * @argv: is an array of arguments as strings.
 *
 * Return: ALways 0.
 */
int main(int argc, char **argv)
{
	int (*fptr)(int, int);
	int n, m;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	fptr = get_op_func(argv[2]);
	if (get_op_func(argv[2]) == NULL || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	n = atoi(argv[1]);
	m = atoi(argv[3]);
	if (m == 0 && (*fptr == op_div || *fptr == op_mod))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (*fptr)(n, m));
	return (0);

}
