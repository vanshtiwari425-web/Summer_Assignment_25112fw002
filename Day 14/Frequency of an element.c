#include <stdio.h>

int main()
{
    int n, i, key;
    int frequency = 0;

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

    // Input element to search frequency
    printf("\n\nEnter the element to find frequency: ");
    scanf("%d", &key);

    // Count frequency
    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            frequency++;
        }
    }

    // Display result
    printf("\n-------------------------");
    printf("\n         RESULT");
    printf("\n-------------------------");
    printf("\nElement   : %d", key);
    printf("\nFrequency : %d", frequency);
    printf("\n-------------------------\n");

    return 0;
}