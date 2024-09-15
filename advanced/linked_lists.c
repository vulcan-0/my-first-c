#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int val;
  struct node *next;
} node_t;

void print_list(node_t *head) {
  node_t *current = head;

  while (current != NULL) {
    printf("%d\n", current->val);
    current = current->next;
  }
}

int pop(node_t **head) {
  int retval = -1;
  node_t *next_node = NULL;

  if (*head == NULL) {
    return -1;
  }

  next_node = (*head)->next;
  retval = (*head)->val;
  free(*head);
  *head = next_node;

  return retval;
}

int remove_by_value(node_t **head, int val) {
  int retval = -1;
  node_t *temp_node = NULL;

  if (*head == NULL) {
    return -1;
  }

  if ((*head)->val == val) {
    return pop(head);
  }

  node_t *current_node = *head;
  while (current_node->next != NULL) {
    temp_node = current_node->next;
    if (temp_node->val == val) {
      current_node->next = temp_node->next;
      free(temp_node);
      return val;
    }
    current_node = current_node->next;
  }

  return retval;
}

void test1();
void test2();
void test3();
void test4();
void test5();

int main() {
  test1();
  test2();
  test3();
  test4();
  test5();
  return EXIT_SUCCESS;
}

void test1() {
  printf("test1\n");

  node_t *test_list = NULL;

  int retval = remove_by_value(&test_list, 1);
  printf("remove value is: %d\n", retval);

  print_list(test_list);

  printf("\n\n");
}

void test2() {
  printf("test2\n");

  node_t *test_list = (node_t *)malloc(sizeof(node_t));
  test_list->val = 1;
  test_list->next = (node_t *)malloc(sizeof(node_t));
  test_list->next->val = 2;

  int retval = remove_by_value(&test_list, 1);
  printf("remove value is: %d\n", retval);

  print_list(test_list);

  printf("\n\n");
}

void test3() {
  printf("test3\n");

  node_t *test_list = (node_t *)malloc(sizeof(node_t));
  test_list->val = 1;
  test_list->next = (node_t *)malloc(sizeof(node_t));
  test_list->next->val = 2;
  test_list->next->next = (node_t *)malloc(sizeof(node_t));
  test_list->next->next->val = 3;
  test_list->next->next->next = (node_t *)malloc(sizeof(node_t));
  test_list->next->next->next->val = 4;
  test_list->next->next->next->next = NULL;

  int retval = remove_by_value(&test_list, 3);
  printf("remove value is: %d\n", retval);

  print_list(test_list);

  printf("\n\n");
}

void test4() {
  printf("test4\n");

  node_t *test_list = (node_t *)malloc(sizeof(node_t));
  test_list->val = 1;
  test_list->next = (node_t *)malloc(sizeof(node_t));
  test_list->next->val = 2;
  test_list->next->next = (node_t *)malloc(sizeof(node_t));
  test_list->next->next->val = 3;
  test_list->next->next->next = (node_t *)malloc(sizeof(node_t));
  test_list->next->next->next->val = 4;
  test_list->next->next->next->next = NULL;

  int retval = remove_by_value(&test_list, 4);
  printf("remove value is: %d\n", retval);

  print_list(test_list);

  printf("\n\n");
}

void test5() {
  printf("test5\n");

  node_t *test_list = (node_t *)malloc(sizeof(node_t));
  test_list->val = 1;
  test_list->next = (node_t *)malloc(sizeof(node_t));
  test_list->next->val = 2;
  test_list->next->next = (node_t *)malloc(sizeof(node_t));
  test_list->next->next->val = 3;
  test_list->next->next->next = (node_t *)malloc(sizeof(node_t));
  test_list->next->next->next->val = 4;
  test_list->next->next->next->next = NULL;

  int retval = remove_by_value(&test_list, 5);
  printf("remove value is: %d\n", retval);

  print_list(test_list);

  printf("\n\n");
}