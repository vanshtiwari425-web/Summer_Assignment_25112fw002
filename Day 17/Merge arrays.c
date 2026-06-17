#include <stdio.h>

int main()
{
    int n1, n2, i;

    // Input size of first array
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    // Input elements of first array
    printf("\nEnter %d elements of the first array:\n", n1);

    for(i = 0; i < n1; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("\nEnter the size of the second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    // Input elements of second array
    printf("\nEnter %d elements of the second array:\n", n2);

    for(i = 0; i < n2; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];

    // Copy first array into merged array
    for(i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }

    // Copy second array into merged array
    for(i = 0; i < n2; i++)
    {
        merged[n1 + i] = arr2[i];
    }

    // Display merged array
    printf("\n-------------------------");
    printf("\n     MERGED ARRAY");
    printf("\n-------------------------\n");

    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }

    printf("\n-------------------------\n");

    return 0;
}