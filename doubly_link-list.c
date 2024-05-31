#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;

    struct Node *next;
    struct Node *prev;
};
struct Node *head;

void insertstart(int data)
{
      struct Node *ptr = (struct Node *) malloc (sizeof (struct Node));
      
      ptr->data=data;
      data->next=head;
      ptr->prev=NULL;
      
      if(head!=NULL)
      {
          head->prev=ptr;
      }
      head=ptr;
}

void display(struct Node* pre)
{
        struct Node*end;
        
        printf("\nforword");
        
        while(pre!=NULL)\
        {
            printf("%d",pre->data);
            end=pre;
            pre=pre->next;
        }
        printf("\nbackword");
        while(end!=NULL)
        {
            printf("%d",end->data);
            end=end->prev;
        }
}

int main()
{
    struct Node*head=NULL;
    
    insertstart(&head,10);
    insertstart(&head,20);
    insertstart(&head,30);
    insertstart(&head,40);
    insertstart(&head,50);
    
    display(head);
    
    return 0;
}


