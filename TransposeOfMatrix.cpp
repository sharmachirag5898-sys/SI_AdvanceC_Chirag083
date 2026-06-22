#include <stdio.h>

int main()
{
    int m,n,i,j;

    printf("Enter rows and columns: ");
    scanf("%d%d",&m,&n);

    int A[m][n];

    printf("Enter matrix:\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("Transpose Matrix:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",A[j][i]);
        }
        printf("\n");
    }

    return 0;
}