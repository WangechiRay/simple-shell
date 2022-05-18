#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main- writes UNIX command line interpreter.
 *
 * Return:0
 */

int main(void)
{
	char *buff;
	size_t size = 10;

	buff = malloc(sizeof(char) * size);

	printf("#cisfun$ ");
	getline(&buff, &size, stdin);

	printf("%s\n", buff);

	free(buff);

	return (0);
}
