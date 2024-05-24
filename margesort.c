#include <stdio.h>

void marge(int arr[], int lb, int mid, int ub) 
{ 
    int i = lb; 
    int j = mid + 1; 
    int k = lb; 
    int arr1[50]; 
     
    while (i <= mid && j <= ub) 
    { 
        if (arr[i] <= arr[j]) 
        { 
            arr1[k] = arr[i]; 
            i++; 
        } 
        else 
        { 
            arr1[k] = arr[j]; 
            j++; 
        } 
        k++; 
    } 
    if (i > mid) 
    { 
        while (j <= ub) 
        { 
            arr1[k] = arr[j]; 
            j++; 
            k++; 
        } 
    } 
    else 
    { 
        while (i <= mid) 
        { 
            arr1[k] = arr[i]; 
            i++; 
            k++; 
        } 
    } 
    for (k = lb; k <= ub; k++) 
    { 
        arr[k] = arr1[k]; 
    } 
}

int margshrot(int arr[],int lb,int ub) 
{ 
    int mid; 
    if(lb<ub) 
    { 
        mid=(lb+ub)/2; 
 
        margshrot(arr,lb,mid); 
         margshrot(arr,mid+1,ub); 
          marge(arr,lb,mid,ub); 
         
    } 
} 

int main() 
{ 
    int arr[]={5,8,20,4,25}; 
    int lb=0; 
    int ub=4; 
 
    for(int i=0; i<5; i++){
        printf("%d \t",arr[i]);
    }
 
    printf("\n");
    
    margshrot(arr,lb,ub); 
 
    for(int i=0; i<5; i++){
        printf("%d \t",arr[i]);
    }
 
 
    return 0; 
}