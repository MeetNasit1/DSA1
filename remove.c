#include <stdio.h>

int deelet(int index, int arr[100], int size)
{

    printf("enter the size of array:-");
    scanf("%d", &size);

    printf("when do you want to add the indrx:-");
    scanf("%d", &index);
    if (size >= index)
    {
        for (int k = 0; k < size; k++)
        {
            scanf("%d", &arr[k]);
        }
        for (int k = 0; k < size; k++)
        {
            printf("%d \t",arr[k]);
        }

        //delet array
        for (int i = index; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
        for (int i = 0; i < size - 1; i++)
        {
            printf("\t %d \t", arr[i]);
        }
    }
    else
    {
        printf("no element found!");
    }

}

int main()
    {

        int index;
        int arr[100];
        int size;
        deelet(index, arr, size);

        return 0;
    }