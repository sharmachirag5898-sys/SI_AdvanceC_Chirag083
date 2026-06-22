#include <stdio.h>

int main()
{
    int n,i,j;
    int symmetric = 1;

    printf("Enter order of square matrix: ");
    scanf("%d",&n);

    int A[n][n];

    printf("Enter matrix:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[i][j] != A[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric)
    {
        printf("Matrix is Symmetric");
    }
    else
    {
        printf("Matrix is Not Symmetric");
    }

    return 0;
}