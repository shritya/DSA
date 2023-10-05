
#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

void midd(struct node *head);

void main() {
  // Initialize nodes
  struct node *head;
  struct node *one = NULL;
  struct node *two = NULL;
  struct node *three = NULL;

  // Allocate memory
  one = malloc(sizeof(struct node));
  two = malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));

  // Assign value values
  one->value = 1;
  two->value = 2;
  three->value = 3;

  // Connect nodes
  one->next = two;
  two->next = three;
  three->next = NULL;
  head = one;

  midd(head);
}

void midd(struct node *head){
  int count,i;
  struct node *temp;
  count=0;
  temp=head;
  while(temp){
    count++;
    temp=temp->next;
  }
  count=count/2;
  temp=head;
  for(i=1;i<=count;i++)
    temp=temp->next;
  printf("%d ",temp->value);
}
