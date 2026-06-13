#include <stdio.h>

int main()
{
    int n, i;

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

    printf("\n-------------------------\n");

    return 0;
}
