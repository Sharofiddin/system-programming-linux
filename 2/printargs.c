#include <stdio.h>

int main (int argc, char *argv[])
{
  while(NULL != *argv) {
   
    printf("%s\n", *argv);
    argv++;
  }
  return 0;
}
