#include <main.h>

/**
 * main-print number of arguments passed.
 * @argc: number of commandline arguments.
 * @argv: pointer to an array of command line argument
 * Return: (0), success
*/

int main(int argc, char *argv[] __attribute__((unuset)))
{
	printf("%d\n", argc - 1);
	return (0);
}
