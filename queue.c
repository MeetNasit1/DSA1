#include<stdio.h>
int rare=-1;
int front=-1;

int queueinsert(int n,int arr[],int element)
{
if(rare==n-1)
{
    printf("queue is full");
}
else if(rare==-1 && front==-1)
{
    rare=front=0;
    arr[rare]=element;
}
else
{
    rare++;
    arr[rare]=element;
}

}
int queuedelete(int arr[])
{
    if(rare==-1 && front==-1)
    {
        printf("queue is empty");
    }
    else if(front==rare)
    {
        front=rare=-1;
    }
    else
    {
        printf("%d\n",arr[front]);
        front++;
    }
}

int queuedisplay( int arr[])
{
    if(rare==-1 && front==-1)
    {
        printf("data not found");
    }
    else
    {
        for(int i=front;i<rare+1;i++)
        {
            printf("%d\t",arr[i]);   
        }
        printf("\n");
    }
}

int main()
{
int n=5;
int arr[n];




queueinsert(n,arr,10);
queueinsert(n,arr,20);
queueinsert(n,arr,30);


queuedisplay(arr);

queuedelete(arr);

queuedisplay(arr);

return 0;
}