#include <stdio.h>

int main()
{
    int n, i, j, temp;

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

    // Input number of rotations
    printf("\n\nEnter the number of left rotations: ");
    scanf("%d", &temp);

    temp = temp % n;

    // Left rotate array
    for(i = 0; i < temp; i++)
    {
        int first = arr[0];

        for(j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }

        arr[n - 1] = first;
    }

    // Display rotated array
    printf("\n\n-------------------------");
    printf("\n   LEFT ROTATED ARRAY");
    printf("\n-------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n-------------------------\n");

    return 0;
}