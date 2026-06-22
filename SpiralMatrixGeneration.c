#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    int arr[n][n];

    int top=0;
    int bottom=n-1;
    int left=0;
    int right=n-1;

    int num=1;

    while(top<=bottom && left<=right)
    {
        int i;

        for(i=left;i<=right;i++)
        {
            arr[top][i]=num++;
        }
        top++;

        for(i=top;i<=bottom;i++)
        {
            arr[i][right]=num++;
        }
        right--;

        for(i=right;i>=left;i--)
        {
            arr[bottom][i]=num++;
        }
        bottom--;

        for(i=bottom;i>=top;i--)
        {
            arr[i][left]=num++;
        }
        left++;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}