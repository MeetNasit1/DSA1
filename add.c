#include <stdio.h>


    int add(int arr[100], int size, int element, int capacity, int index)
    {

        
        if (size >= capacity)
        {
            return -1;
        }
        else
        {
            for (int i = size - 1; i >= index; i--)
            {
                arr[i + 1] = arr[i];
            }
            arr[index] = element;
            size++;
        }

        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");

        return 0;
    }

    int main()
    {
        int arr[100] = {1, 2, 3, 20, 12};
        int size = 5;
        int element = 55;
        int capacity = 100;
        int index = 3;

        add(arr, size, element, capacity, index);

        return 0;
    }
