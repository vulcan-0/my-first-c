#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 10;

  int *pointer_to_n = &n;
  *pointer_to_n += 1;
  printf("pointer_to_n: %d\n", *pointer_to_n);

  char *name = "Big A";
  printf("name: %s\n", name);

  char *other_name = (char *)malloc(5 * sizeof(char));
  other_name = "Big A";
  printf("other_name: %s\n", other_name);
  printf("other_name[0]: %c\n", other_name[0]);

  char *other_name2 = (char *)malloc(5 * sizeof(char));
  other_name2[0] = 'B';
  other_name2[0] = 'P';
  other_name2[1] = 'i';
  other_name2[2] = 'g';
  other_name2[3] = ' ';
  other_name2[4] = 'A';
  other_name2[5] = 'A';
  other_name2[6] = 'A';
  printf("other_name2: %s\n", other_name2);

  if (pointer_to_n != &n)
    return 1;
  if (*pointer_to_n != 11)
    return 1;

  printf("Done!\n");
  return 0;
}