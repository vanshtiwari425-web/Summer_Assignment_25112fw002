#include <stdio.h>

int main()
{
    int n, i, j, k;
    int isDuplicate;

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

    // Display array
    printf("\n-------------------------");
    printf("\n    ARRAY ELEMENTS");
    printf("\n-------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Find duplicate elements
    printf("\n\n-------------------------");
    printf("\n   DUPLICATE ELEMENTS");
    printf("\n-------------------------\n");

    for(i = 0; i < n; i++)
    {
        isDuplicate = 0;

        // Check whether the element has already been processed
        for(k = 0; k < i; k++)
        {
            if(arr[i] == arr[k])
            {
                isDuplicate = 1;
                break;
            }
        }

        if(isDuplicate)
        {
            continue;
        }

        // Check for duplicate occurrence
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d\n", arr[i]);
                break;
            }
        }
    }

    printf("-------------------------\n");

    return 0;
}