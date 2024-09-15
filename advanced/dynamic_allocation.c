#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char *name;
  int x;
  int y;
} point;

int main() {
  point *mypoint = NULL;

  printf("sizeof(point): %lu\n", sizeof(point));
  mypoint = (point *)malloc(sizeof(point));

  mypoint->name = "The Supper Point";
  mypoint->x = 10;
  mypoint->y = 5;
  printf("sizeof(mypoint): %lu\n", sizeof(mypoint));
  printf("mypoint->name: %s\n", mypoint->name);
  printf("sizeof(mypoint->name): %lu\n", sizeof(mypoint->name));
  printf("*(mypoint->name): %c\n", *(mypoint->name));
  printf("sizeof(*(mypoint->name)): %lu\n", sizeof(*(mypoint->name)));
  printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

  free(mypoint);
  return 0;
}