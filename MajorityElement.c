#include<stdio.h>

int main()
{
    int n;
    int i,j;

    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        int count = 0;

        for(j=0;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > n/3)
        {
            printf("%d",arr[i]);
            break;
        }
    }

    return 0;
}