#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *path_to_home;
  path_to_home = getenv("HOME");
  if(NULL == path_to_home)
    printf("The HOME variable is not in env list\n");
  else 
    printf("HOME=%s\n", path_to_home);
}
