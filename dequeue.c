// Online C compiler to run C program online
#include <stdio.h>

int rare=-1;
int front=-1;

int rareinsert(int arr[],int n, int element){
    
    if(rare==n-1){
        printf("queue is full");
    }
    else if(rare==-1 && front==-1){
        rare=0;
        arr[rare]=element;
    }
    else if(rare==n-1){
        rare=0;
        arr[front]=element;
    }
    else{
        rare++;
        arr[rare]=element;
    }
    
}

int frontinsert(int arr[],int n, int element){
    
    if(rare==n-1){
        printf("queue is full");
    }
    else if(rare==-1 && front==-1){
        rare=front=0;
        arr[rare]=element;
    }
    else if(front==0){
        front=n-1;
        arr[front]=element;
    }
    else{
        front=front-1;
        arr[rare]=element;
    }
    
}

int frontdelete(int arr[],int n){
    if(rare==-1 && front==-1){
        printf("queue is empty");
    }
    else if(rare==front){
        front=rare=-1;
    }
    else if(front==n-1){
        printf("element is from front deleted %d \t",arr[front]);
        front=0;
    }
    else{
        printf("element is from front deleted %d \t",arr[front]);
        front=front+1;
    }
}

int raredelete(int arr[],int n){
    if(rare==-1 && front==-1){
        printf("queue is empty");
    }
    else if(rare==front){
        front=rare=-1;
    }
    else if(rare==(n-1)){
        printf("element is from rare deleted %d \t",arr[rare]);
        rare=n-1;
    }
    else{
        printf("element is from rare deleted %d \t",arr[rare]);
        rare=n-1;
    }
}

int display(int arr[]){
    
    if(rare==-1 && front==-1){
        printf("data not found");
    }
    else {
        for(int i=front; i<rare+1; i++){
            printf("%d \t",arr[i]);
        }
        printf("\n");
    }
}

int main() {
   
   int n=5;
   int arr[n];
   
   rareinsert(arr,n,10);
   rareinsert(arr,n,20);
   frontinsert(arr,n,30);
   frontinsert(arr,n,40);
   rareinsert(arr,n,80);
   
   display(arr);
   
   frontdelete(arr,n);
   raredelete(arr,n);
   
   display(arr);
   

    return 0;
}