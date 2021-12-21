// signal信号捕捉函数

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <pthread.h>

void sys_err(const char *str)
{
	perror(str);
	exit(1);
}

void sig_catch(int signo)
{
    printf("catch you!! %d", signo);

    return ;
}

int main(int argc, char *argv[])
{
    signal(SIGINT, sig_catch);

    while (1) {
		printf("can catch sigint!\n");
		sleep(2);
	}

	return 0;
}
