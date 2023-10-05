#include <stdio.h>
#include <stdlib.h>
struct node *head,*one,*two,*three,*temp;
struct node
{
    int data;
    struct node *next;
};
void reverseList(struct node *head)
{
struct node* prev,*curr,*nex;
if(head==NULL || (head->next)==NULL)
    return head;
prev = NULL;
curr = head;
while(curr){
    nex = curr->next;
    curr->next=prev;
    prev=curr;
    curr=nex;
}
printf("\n Linked list After Reversing: \n");
while(prev!=NULL){
    printf("%d",prev->data);
    prev = prev->next;
}
     
}
void main (){
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    head = one;
    temp = head;
    //for first node
    one->data = 1;
    one->next = two;
    //for second node
    two->data = 2;
    two->next = three;
    //for third node
    three->data = 3;
    three->next = NULL;
    printf("Linked list Before Reversing: \n");
    while(temp!=NULL){
        printf("%d", temp->data);
        temp = temp->next;
    }
        
    reverseList(head);
}
