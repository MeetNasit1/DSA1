#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insert_end(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp -> data = val;

    if(head == NULL)
    {
        head = temp;
        temp -> next = head;

        return;
    }
    while(ptr -> next != head)
    {
        ptr = ptr -> next;
    }
    ptr -> next = temp;
    temp -> next = head;

    return;
}
void  insert_first(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    
     temp->data = val;

    if (head == NULL)
    {
        head = temp;
        head->next = head;
    } else
    {
        while(ptr -> next != head)
        {
            ptr = ptr -> next;
        }
        temp->next = head;
        ptr->next = temp;
        head = temp;
    return ;
    }
}
void delete_end()
{
    struct node *ptr = head;
    struct node *pre = NULL;

    if (head == NULL)
    {
        printf("list is empty.\n");
        return;
    }
    if(head -> next == head)
    {
        free(head);
        head = NULL;
        return;
    }
    while (ptr -> next != head)
    {
        pre = ptr;
        ptr = ptr -> next;
    }
    pre -> next = head;
      free(ptr);
}
void display(){
    struct node *ptr = head;

    if(head == NULL){
        printf("List is empty.\n");
        return;
    }

    while(ptr->next != head){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
  printf("%d ", ptr->data);
    printf("\n");
} 
int main(){
    int choice;
    int val,data;

    do
    {
        printf("1. Insert at End\n");
        printf("2. Display\n");
        printf("3. Insert at First\n");
        printf("4. delete at end\n");
        printf("5. for exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);


    switch(choice)
    {
    case 1:
        printf("enter value to insert at end: ");
        scanf("%d",&val);
        insert_end(val);
        break;

    case 2:
        display();
        break;

    case 3:
        printf("enter value to insert at first: ");
        scanf("%d",&val);
        insert_first(val);
        break;

    case 4:
        delete_end();
        break;

    case 5:
        exit(0);
        break;
    }
}
while ( choice < 9);
     return 0;
    
}