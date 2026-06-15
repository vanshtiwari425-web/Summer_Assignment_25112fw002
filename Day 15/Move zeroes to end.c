#include <stdio.h>

int main()
{
    int n, i, j = 0, temp;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("\nEnter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display original array
    printf("\n-------------------------");
    printf("\n    ORIGINAL ARRAY");
    printf("\n-------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Move zeroes to the end
    for(i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    // Display modified array
    printf("\n\n-------------------------");
    printf("\n  ARRAY AFTER MOVING");
    printf("\n      ZEROES");
    printf("\n-------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n-------------------------\n");

    return 0;
}