#include<stdio.h>

int front=-1;
int rare=-1;


int insertcricular(int arr[],int n,int element)
{
    if(front==-1 && rare==-1)
    {
        front=rare=0;
        arr[rare]=element;
    }
    else if(((rare +1)%n)==front)
    {
        printf("queue is full");
    }
    else
    {
        rare=(rare+1)%n;
        arr[rare]=element;
    }
}

int insertdelete(int arr[],int n)
{
    if(front==-1 && rare==-1)
    {
        printf("queue is empty");
    }
    else if(front = rare )
    {
        front = rare=-1;
    }
    else
    {
        printf("%d",arr[front]);
        rare=(front+1)%n;
    }
}

int display(int arr[],int n)
{
    int i=front;
    if(front==-1 && rare ==-1)
    {
        printf("queue is empty");
    }
    else
    {
        while(i!=rare)
        {
            printf("%d",arr[i]);
            i=((i+1)%n);
        }
        
    }
    printf("%d",arr[rare]);
}


int main()
{
    int n=5;
    int arr[n];
    
    
    insertcricular(arr,n,56);
    insertcricular(arr,n,23);
    insertcricular(arr,n,89);
    insertcricular(arr,n,10);
    insertcricular(arr,n,45);
    
    
    insertdelete(arr,n);
    
    
    display(arr,n);
    
}