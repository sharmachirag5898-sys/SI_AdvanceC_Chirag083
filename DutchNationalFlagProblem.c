#include<stdio.h>

int main()
{
    int n,i;

    scanf("%d",&n);

    int arr[n];

    int zero = 0;
    int one = 0;
    int two = 0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

        if(arr[i] == 0)
        {
            zero++;
        }
        else if(arr[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }

    int index = 0;

    for(i=0;i<zero;i++)
    {
        arr[index++] = 0;
    }

    for(i=0;i<one;i++)
    {
        arr[index++] = 1;
    }

    for(i=0;i<two;i++)
    {
        arr[index++] = 2;
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}