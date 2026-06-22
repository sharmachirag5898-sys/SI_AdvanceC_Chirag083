#include<stdio.h>

int main()
{
    int r,c;
    int i,j;
    int target;
    int found = 0;

    scanf("%d%d",&r,&c);

    int arr[r][c];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    scanf("%d",&target);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j] == target)
            {
                printf("Found at (%d,%d)",i+1,j+1);
                found = 1;
                break;
            }
        }

        if(found)
        {
            break;
        }
    }

    if(found == 0)
    {
        printf("Not Found");
    }

    return 0;
}