#include <stdlib.h>
#include <stdio.h>

extern char **environ;

int main() {
  char **envp = environ;
  while(NULL != *envp) {
    printf("%s\n", *envp);
    envp++;
  }
  return 0;
}
