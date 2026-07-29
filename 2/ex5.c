#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[])
{
  char name[HOST_NAME_MAX];
  size_t len = HOST_NAME_MAX;
  int returnvalue;
  returnvalue = gethostname(name, len);
  if(-1 == returnvalue)
    perror("gethostname");
  else 
    printf("%s\n", name);
  return 0;
}
