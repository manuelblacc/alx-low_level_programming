#include "main.h"
#include <stdio.h>

/**
 * main - programs that prints the number of arguments passed into it
 * @argc: size of argv
 * @argv: array containing the program line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void) argv;
printf("%i\n", argc - 1);

return (0);
}
