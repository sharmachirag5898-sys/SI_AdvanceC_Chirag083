#include<stdio.h>

int main()
{
    int n,i,j;

    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        int leftSum = 0;
        int rightSum = 0;

        for(j=0;j<i;j++)
        {
            leftSum += arr[j];
        }

        for(j=i+1;j<n;j++)
        {
            rightSum += arr[j];
        }

        if(leftSum == rightSum)
        {
            printf("Index = %d",i);
            return 0;
        }
    }

    printf("No Equilibrium Index");

    return 0;
}