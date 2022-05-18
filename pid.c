#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

/**
* main- pass betty checks
*
* Return:0
*/


int main(void)
{
	pid_t ppid;
	pid_t pid;

	pid = getpid();
	ppid = getppid();

	printf("program processing ID is %u\n", pid);
	printf("It's parent id is %u\n", ppid);

	return (0);
}
