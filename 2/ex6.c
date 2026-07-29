#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  if(argc < 3) {
    printf("Too few arguments\n");
    return 1;
  } 
  if (argc > 3) {
    printf("Too much arguments\n");
    return 1;
  }
  char *endptr = NULL;
  long a = strtol(argv[1], &endptr, 10);
  if(*endptr != '\0'){
    printf("invalid character detected in first arg - %s\n", endptr);
    return 1;
  } 
  
  long b = strtol(argv[2], &endptr, 10);
  if(*endptr != '\0'){
    printf("invalid character detected in second arg - %s\n", endptr);
    return 1;
  } 

  if( a >= b) {
    printf("invalid range [%ld; %ld] \n", a, b);
  }

  for(long i = a; i <=b; i++){
    printf("%ld\n", i);
  }

  return 0;
}
