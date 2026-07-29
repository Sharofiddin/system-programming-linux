#include <unistd.h>
#include <stdio.h>
#include <errno.h>

void main() 
{
  char name[4]; 
  size_t len = 4;
  int returnvalue;

  returnvalue = gethostname(name, len);
  if(-1 == returnvalue){
    switch (errno) {
      case EFAULT:
        printf("Bad address passed for the string name\n"); break;
      case EINVAL:
        printf("The length argument was negative\n"); break;
      case ENAMETOOLONG:
        printf("The Hostname is too long for allocated array\n"); break;
    }
  } else {
    printf("%s\n", name);
  }
}
