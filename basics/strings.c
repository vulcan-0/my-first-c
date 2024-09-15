#include <stdio.h>
#include <string.h>

int main() {
  char first_name[] = "John";
  char last_name[] = "Doe";
  char name[100];

  printf("first_name's length is: %lu\n", strlen(first_name));
  printf("first_name[0] is: %c\n", first_name[0]);
  printf("first_name[1] is: %c\n", first_name[1]);
  printf("first_name[2] is: %c\n", first_name[2]);
  printf("first_name[3] is: %c\n", first_name[3]);
  printf("first_name[4] is: %c\n", first_name[4]);

  last_name[0] = 'B';
  sprintf(name, "%s %s", first_name, last_name);
  if (strncmp(name, "John Boe", 100) == 0) {
    printf("Done!\n");
  }
  name[0] = '\0';
  printf("name's length is: %lu\n", strlen(name));
  strncat(name, first_name, 4);
  printf("name's length is: %lu\n", strlen(name));
  strncat(name, last_name, 20);
  printf("name's length is: %lu\n", strlen(name));
  printf("%s\n", name);
  return 0;
}
