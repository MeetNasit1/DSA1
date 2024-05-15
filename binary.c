#include<stdio.h>
int binarySearch(int arr[5], int temp,int low,int high,int mid,int x)
{
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    for(int i=0;i<5;i++)
    {
        printf("\t%d",arr[i]);
    }
    while (low<=high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]==x )
        {
            return mid;
        }
        if(arr[mid]<x)
        {
            low=mid+1;

        }
        else
        {
            high=mid-1;
        }
       
    }
     return -1;
    
}
int main()
{
    int arr[5]={7,5,19,28,75};
    int temp;
    int low=0;
    int high=5;
    int mid;
    int x=19;
    
    int result = binarySearch(arr,temp,low,high,mid,x);
    if(result==-1)
    {
        printf("No element fount");
    }
    else
    {
        printf("\n result %d",result+1);
    }
    
    return 0;
    
}