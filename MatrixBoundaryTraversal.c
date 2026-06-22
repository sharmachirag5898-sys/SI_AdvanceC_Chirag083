#include<stdio.h>

int main()
{
    int r,c;
    int i,j;

    scanf("%d%d",&r,&c);

    int arr[r][c];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(j=0;j<c;j++)
    {
        printf("%d ",arr[0][j]);
    }

    for(i=1;i<r;i++)
    {
        printf("%d ",arr[i][c-1]);
    }

    for(j=c-2;j>=0;j--)
    {
        printf("%d ",arr[r-1][j]);
    }

    for(i=r-2;i>0;i--)
    {
        printf("%d ",arr[i][0]);
    }

    return 0;
}