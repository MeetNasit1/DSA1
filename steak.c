#include <stdio.h>

int temp=-1;

int insert(int arr[],int n,int number)
{
    if(temp>=n-1)
    {
        printf("stack is full \n");
    }
    else
    {
        temp=temp+1;     // temp move to first index number
        arr[temp] = number;     // user element store in stack
    }
};

int delete(int arr[])
{
    if(temp<0)
    {
        printf("stack is empty! \n");
    }
    else
    {
        temp--;
        printf("last element is delete \n");
    }
};

int main() 
{
    int ch;
    int n;
    int number;
    
    printf("enter the size of arraay ");
    scanf("%d",&n);
    
    int arr[n];
    
    
    do{
        printf("1. add element \n");
        printf("2. delete element \n");
        printf("3. display element \n");
        printf("4. exit \n");
        
        printf("enter the number ");
        scanf("%d",&ch);
        
        switch(ch){
        case 1:
                printf( "insert element \n");
                scanf("%d",&number);
                insert(arr,n,number);
                break;

            case 2:

                delete(arr);
                break;

            case 3:
                break;
                
           case 4:
                goto end;
                break;
       }
    }
      while (ch>0 || ch<4);
    
    end:

    return 0;
}