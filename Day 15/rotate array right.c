#include <stdio.h>

int main()
{
    int n, i, j, rotations;

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
    printf("\n\nEnter the number of right rotations: ");
    scanf("%d", &rotations);

    rotations = rotations % n;

    // Right rotate array
    for(i = 0; i < rotations; i++)
    {
        int last = arr[n - 1];

        for(j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }

        arr[0] = last;
    }

    // Display rotated array
    printf("\n\n-------------------------");
    printf("\n   RIGHT ROTATED ARRAY");
    printf("\n-------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n-------------------------\n");

    return 0;
}