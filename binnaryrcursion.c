#include<stdio.h>

int recurionbinary(int arr[5],int low, int high,int element)
{
       while(low<=high)
       {
           int mid=(high+low)/2;
           
           if(arr[mid] == element)
           {
               return mid;
           }
          else if(arr[mid]<element)
           {
              return recurionbinary(arr,mid+1,high,element);
           }
           else
           {
             return  recurionbinary(arr,low,mid-1,element);
           }
       }
       
       return -1;
}

int main()
{
    
    int arr[5]={2,5,8,20,50};
    int low=0;
    
    int high=5;
    int element=20;
    
  int result= recurionbinary(arr,low,high,element);
    
    if( result ==-1)
    {
        printf("element not found");
    }
    else
    {
        printf("%d\t",result);
    }
    
    return 0;
    
}