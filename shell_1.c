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
	char *input;
	char *buff;
	size_t size = 10;
	char *argv[2];

	argv[1] = NULL;

	while(1)
	{
		input = prompt();
		if (input == NULL)
		{
			write(STDOUT_FILENO, "\n", 2);
			exit(0);
		}

		argv[0] = input;

	buff = malloc(sizeof(char) * size);

	if(execve(argv[0], argv, NULL) == -1)
		perror("error!");

	printf("#cisfun$ ");
	getline(&buff, &size, stdin);

	printf("%s\n", buff);

	free(buff);

	return (0);
}
