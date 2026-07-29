#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <stdio.h>
int main() 
{
  printf("Thread id %ld\n", syscall(SYS_gettid));
  return 0;

}
