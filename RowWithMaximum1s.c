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

    int maxCount = 0;
    int row = -1;

    for(i=0;i<r;i++)
    {
        int count = 0;

        for(j=0;j<c;j++)
        {
            if(arr[i][j] == 1)
            {
                count++;
            }
        }

        if(count > maxCount)
        {
            maxCount = count;
            row = i + 1;
        }
    }

    printf("Row = %d",row);

    return 0;
}