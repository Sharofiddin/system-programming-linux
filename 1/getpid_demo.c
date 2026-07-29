#include <stdio.h>
#include <unistd.h>

void main(int argc, char *argv[])
{
  printf("I am the process with PID %d\n", getpid());
}
