#include <stdio.h>

int main()
{
    int n, i;
    int max, min;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];

    // Input array elements
    printf("\nEnter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &a[i]);
    }

    // Display array
    printf("\n-------------------------");
    printf("\n      ARRAY ELEMENTS");
    printf("\n-------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    // Initialize max and min
    max = min = a[0];

    // Find largest and smallest element
    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }

        if(a[i] < min)
        {
            min = a[i];
        }
    }

    // Display results
    printf("\n\n-------------------------");
    printf("\n         RESULTS");
    printf("\n-------------------------");
    printf("\nLargest Element  : %d", max);
    printf("\nSmallest Element : %d", min);
    printf("\n-------------------------\n");

    return 0;
}