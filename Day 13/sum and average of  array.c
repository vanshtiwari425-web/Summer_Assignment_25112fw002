#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;
    float avg;

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

    // Calculate sum
    for(i = 0; i < n; i++)
    {
        sum += a[i];
    }

    // Calculate average
    avg = (float)sum / n;

    // Display results
    printf("\n\n-------------------------");
    printf("\n         RESULTS");
    printf("\n-------------------------");
    printf("\nSum of Elements     : %d", sum);
    printf("\nAverage of Elements : %.2f", avg);
    printf("\n-------------------------\n");

    return 0;
}