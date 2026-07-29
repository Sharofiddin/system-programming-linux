#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(const char* str, char *reversed, int len) 
{
  int i = 0;
  while(i < len) {
    reversed[i] = str[len - 1 - i];
    i++;
  }
  reversed[len]='\0';
}

int main(int argc, char *argv[])
{
  while(*argv != NULL) {
    int len = strlen(*argv);
    char reversed[len+1];
    reverse(*argv, reversed, len);
    printf("%s\n", reversed);
    argv++;
  }
  return 0;
}
