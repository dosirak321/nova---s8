#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 45

int main() {
  int i;

  srand ((unsigned)time(NULL));

  for (i = 0; i < 6; i++) {
    printf("%d", 1 + rand()%MAX);
  }
  printf("\n");
  return 0;
}