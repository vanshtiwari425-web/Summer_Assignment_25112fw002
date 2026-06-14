#include <stdio.h>

int main()
{
    int n, i, key, found = 0;

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

    // Input search element
    printf("\n\nEnter the element to search: ");
    scanf("%d", &key);

    // Linear Search
    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            found = 1;
            break;
        }
    }

    // Display result
    printf("\n-------------------------");
    printf("\n         RESULT");
    printf("\n-------------------------");

    if(found)
    {
        printf("\nElement %d found at position %d", key, i + 1);
    }
    else
    {
        printf("\nElement %d not found in the array", key);
    }

    printf("\n-------------------------\n");

    return 0;
}