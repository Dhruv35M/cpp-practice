#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct LinkedList {
  __int32 data;
  struct LinkedList *next;
};

typedef struct LinkedList LinkedList;

int main(int argc, char const *argv[]) {
  printf("Hello, World -- Welcome to LinkedList!\n");
  return 0;
}
