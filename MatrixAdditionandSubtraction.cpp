#include <stdio.h>

int main()
{
    int m, n, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &m, &n);

    int A[m][n], B[m][n], Sum[m][n], Diff[m][n];

    printf("Enter First Matrix:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter Second Matrix:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
            Diff[i][j] = A[i][j] - B[i][j];
        }
    }

    printf("\nAddition Matrix:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction Matrix:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", Diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}