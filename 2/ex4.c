#include <stdio.h>
#include <string.h>

#define TRUE  1
#define FALSE 0
int main(int argc, char *argv[])
{
  int sorted = FALSE;
  int sorted_cnt = 1;
  while(!sorted) {
    sorted = TRUE;
    for (size_t i = 0; i < argc - sorted_cnt; i++) {
      if(strlen(argv[i]) > strlen(argv[i+1])){
        char *temp = argv[i];
        argv[i] = argv[i+1];
        argv[i+1] = temp;
        sorted = FALSE;
      }
    }
    sorted_cnt++;
  }
  while(NULL != *argv){
      printf("%s\n", *argv);
      *argv++;
  }
  return 0;
}
