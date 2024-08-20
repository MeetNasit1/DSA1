#include<stdio.h>

int bubble(int temp,int arr[5],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
    for(int i=0;i<n;i++)
        {
            printf("\t%d",arr[i]);
        }    
}
int main()
{
    int arr[5]={1,2,3,25,26};
    int temp;
    int n=5;
    
    bubble(temp,arr,n);
    
    return 0;

}