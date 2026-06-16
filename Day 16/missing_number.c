#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0, expectedSum, missingElement;

    // Input total number of elements
    printf("Enter the value of N: ");
    scanf("%d", &n);

    int arr[n - 1];

    // Input array elements
    printf("\nEnter %d elements from the range 1 to %d:\n", n - 1, n);

    for(i = 0; i < n - 1; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate sum of given elements
    for(i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }

    // Calculate expected sum
    expectedSum = n * (n + 1) / 2;

    // Find missing element
    missingElement = expectedSum - sum;

    // Display results
    printf("\n-------------------------");
    printf("\n      RESULT");
    printf("\n-------------------------\n");

    printf("Expected Sum      : %d\n", expectedSum);
    printf("Actual Sum        : %d\n", sum);
    printf("Missing Element   : %d\n", missingElement);

    printf("-------------------------\n");

    return 0;
}