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
	pid_t pid, ppid;

	pid = getpid();
	ppid = getppid();

	printf("pid:%u\n ppid:%u\n", pid, ppid);

	return (0);
}
