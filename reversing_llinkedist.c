struct Node* reverseList(struct Node *head)
    {
     struct Node* prev,*curr,*nex;
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
    return prev;
     
    }
