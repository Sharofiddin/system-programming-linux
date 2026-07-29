#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void main() {
  printf("I am thread with ID %d\n", gettid());
}
