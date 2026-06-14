#include <stdio.h>

int main()
{
    int n, i, j, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display Original Array
    printf("\n-------------------------");
    printf("\n    ORIGINAL ARRAY");
    printf("\n-------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Bubble Sort (Descending Order)
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display Sorted Array
    printf("\n\n-------------------------");
    printf("\n     SORTED ARRAY");
    printf("\n-------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\n-------------------------");
    printf("\n         RESULT");
    printf("\n-------------------------");
    printf("\nSecond Largest Element : %d", arr[1]);
    printf("\n-------------------------\n");

    return 0;
}