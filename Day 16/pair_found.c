#include <stdio.h>

int main()
{
    int n, i, j, targetSum;
    int pairFound = 0;

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

    // Input target sum
    printf("\nEnter the required sum: ");
    scanf("%d", &targetSum);

    // Display array
    printf("\n-------------------------");
    printf("\n    ARRAY ELEMENTS");
    printf("\n-------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Find pairs
    printf("\n\n-------------------------");
    printf("\n   PAIRS WITH SUM %d", targetSum);
    printf("\n-------------------------\n", targetSum);

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == targetSum)
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
                pairFound = 1;
            }
        }
    }

    if(pairFound == 0)
    {
        printf("No pair found.\n");
    }

    printf("-------------------------\n");

    return 0;
}