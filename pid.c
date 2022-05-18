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
        pid_t cpid, ppid;

        cpid = getpid();
        ppid = getpid();

        printf("cpid:%u\n ppid:%u\n", cpid, ppid);
        return (0);
}
