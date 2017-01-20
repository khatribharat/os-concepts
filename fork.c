#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

// Wrote this to check if the forked process carries the same process name as the parent process

int main() {
	printf("Forking now ...\n");
	fork();
	pid_t pid = getpid();
	printf("Hello from pid = %d\n", pid);
	int sleepDurationInMilliSec = 10000; /* 10 seconds */
	usleep(sleepDurationInMilliSec*1000);
	return 0;	
}
