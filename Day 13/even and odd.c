#include <stdio.h>

int main()
{
    int n, i;
    int even = 0, odd = 0;

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

    // Count even and odd elements
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    // Display results
    printf("\n\n-------------------------");
    printf("\n         RESULTS");
    printf("\n-------------------------");
    printf("\nEven Elements : %d", even);
    printf("\nOdd Elements  : %d", odd);
    printf("\n-------------------------\n");

    return 0;
}
