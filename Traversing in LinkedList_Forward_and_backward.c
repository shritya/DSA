#include <stdio.h>
#include <stdlib.h>
struct node *head,*one,*two,*three,*ptrahead,*ptrback;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
void input(){
    printf("What you want to do with LinkedList \n 1.Traverse the linkedlist \n 2.Go to previous node \n 3.Exit \n");
    int user;
    scanf("%d", &user);
    switch (user)
    {
    case 1/* constant-expression */:
        traverse();/* code */
        break;
    case 2/* constant-expression */:
        traversebk();/* code */
        break;
    case 3:
        printf("Ok \n");
        break;
    default:
        printf("Wrong input choose again \n");
        main();
    }
}
void traverse() {
    if (ptrahead->next == NULL) {
        printf("No traversing allowed further *****reset the pointer*****\n");
        input();
    }
    ptrahead = ptrahead->next;
    ptrback = ptrahead;
    printf("Done traversing %d\n", ptrahead->data);
    input();
}
void traversebk() {
    if (ptrback->prev == NULL) {
        printf("No back traversing allowed further *****reset the pointer*****\n");
        input();
    } 
    ptrback = ptrback->prev;
    ptrahead = ptrback;
    printf("Done back traversing %d\n", ptrback->data);
    input();
}


int main (void){
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    head = one;
    //for first node
    one->prev = NULL;
    one->data = 1;
    one->next = two;
    //for second node
    two->prev = one;
    two->data = 2;
    two->next = three;
    //for third node
    three->prev = two;
    three->data = 3;
    three->next = NULL;
    ptrahead = head;
    ptrback = NULL;
    input();
}
