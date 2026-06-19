#include <stdio.h>

int main() {
    int r, c, i;
    int sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    if (r == c) {
        for (i = 0; i < r; i++) {
            sum += a[i][i]; 
        }
        printf("Sum of main diagonal elements = %d\n", sum);
    } else {
        printf("Diagonal sum is only defined for square matrices.\n");
    }

    return 0;
}