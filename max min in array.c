
#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, max, min, size;

    /* Input size of the array */
    printf("Enter size of the array: ");
    scanf("%d", &size);

    /* Input array elements */
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }



    max = arr[0];
    min = arr[0];

    /*
     * Find maximum and minimum in all array elements.
     */
    for(i=1; i<size; i++)
    {
        /* If current element is greater than max */
        if(arr[i] > max)
        {
            max = arr[i];
        }

        /* If current element is smaller than min */
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    /* Print maximum and minimum element */
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}
