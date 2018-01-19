#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <signal.h>
#include <pierre.h>
#include <sys/types.h>

#define N	255

static void test_handler(int s)
{
	printf("Receive signal with number %d\n", s);
}

int main(int argc, char** argv)
{
	int pid = getpid();
	printf("My PID is: %d\n", pid);

	int res = pierre(12);
	printf("pierre returns: %d\n", res);

	res = rename("./x", "./y");
	printf("rename returns %d\n", res);


	return 0;
}
