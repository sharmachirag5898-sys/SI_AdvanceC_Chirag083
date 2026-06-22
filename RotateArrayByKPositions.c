#include<stdio.h>

int main()
{
    int n,k,i;

    printf("Enter Size and K: ");
    scanf("%d%d",&n,&k);

    int arr[n];
    int temp[n];

    printf("Enter Elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        temp[(i+k)%n] = arr[i];
    }

    printf("Rotated Array:\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",temp[i]);
    }

    return 0;
}