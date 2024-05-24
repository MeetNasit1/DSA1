#include <stdio.h>

int partition(int arr[],int low,int high)
{
    int start=low;
    int end=high;
    int pivot=arr[low];
    int temp;
    
    while(start<end)
    {
        while(arr[start]<=pivot)
        {
            start++;
        }
        
        while(arr[end]>pivot)
        {
            end--;
        }
        
        if(start<end)
        {
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
        
    }
    temp=arr[low];
    arr[low]=arr[end];
    arr[end]=temp;
    
    return end;
}

int quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int loc = partition(arr,low,high);
        
        quicksort(arr,low,loc-1);
        quicksort(arr,loc+1,high);
        
    }
}

int main()
{
    int arr[5]={10,6,8,41,20};

    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    
    quicksort(arr,0,5);
    
     for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    
    

    return 0;
}