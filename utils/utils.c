#include "utils.h"

void print_arr(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d\t", arr[i]);
        if (((i + 1) % 5 == 0))
            printf("\n");
    }
    printf("\n");
}




