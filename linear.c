#include <stdio.h>

int linear(int arr[], int n,int temp){
    int not=0;
    int value;
    for(int i=0; i<n; i++){
        
        arr[i] = (rand()%50)+1;
      
    }
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);  
    }
    
    printf("enter the value you want to find");
    scanf("%d",&value);
    
    
    for(int k=0; k<n; k++){
        if(arr[k] == value){
            not=1;
            printf("\n temp element position is %d",k);
            break;
        }
        
    }
    if(not==0){
        printf("\n not find value in array");
    }
    
    return 0;
    
}

int main() {
    
    int n;
    int arr[n];
    int temp;
   
    printf("enter the size of array ");
    scanf("%d",&n);
    
    linear(arr,n,temp);

    return 0;
}