#include <stdio.h>

void main() {
  char username[256];
  printf("Enter your name: ");
  scanf("%255s", username);
  printf("hello, %s\n", username);
}
