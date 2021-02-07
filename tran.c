#include <stdio.h>
int main() {
    int a[10][10], transpose[10][10], n, m, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    printf("\nEnter matrix elements:\n");
    for (i = 0; i < n; ++i)
        for (j = 0; j < m; ++j)
        {
            scanf("%d", &a[i][j]);
        }

    // Displaying the matrix a[][]
    printf("\nEntered matrix: \n");
    for (i = 0; i < n; ++i)
        for (j = 0; j < m; ++j) 
        {
            printf("%d  ", a[i][j]);
            if (j == m - 1)
                printf("\n");
        }

    // Finding the transpose of matrix a
    for (i = 0; i < n; ++i)
        for (j = 0; j < m; ++j) 
        {
            transpose[j][i] = a[i][j];
        }

    // Displaying the transpose of matrix a
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < n; ++i)
        for (j = 0; j < m; ++j) {
            printf("%d  ", transpose[i][j]);
            if (j == n - 1)
                printf("\n");
        }
    return 0;
}
